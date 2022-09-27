#include "userlogin.h"
#include "ui_userlogin.h"
#include "studentui.h"
#include "teacherui.h"
#include "administratorui.h"
#include "datastr.h"
#include <QMessageBox>
extern class course sheet;

UserLogin::UserLogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserLogin)
{
    ui->setupUi(this);

    ui->comboBox->clear();
    QStringList strList;
    strList<<"学生"<<"教师"<<"管理员";
    ui->comboBox->addItems(strList);
}

UserLogin::~UserLogin()
{
    delete ui;
}

void UserLogin::on_exitButton_clicked()
{
    close();
}

void UserLogin::on_enterButton_clicked()
{
    int attribute=ui->comboBox->currentIndex()+1;
    QString username=ui->usernamelineEdit->text();
    QString password=ui->passwordlineEdit->text();
    int s=LocateElem(sheet.userhead[attribute],username,1);
    if(s==0)
    {
        QMessageBox::critical(this,"错误提示","用户不存在。");
    }
    else
    {
        ElemType e;
        GetElem(sheet.userhead[attribute],s,e);
        if(e.usertype.password!=password)
        {
            QMessageBox::critical(this,"错误提示","密码错误。");
        }
        else
        {
            sheet.user=e;
            sheet.attribute=attribute;
            sheet.username=username;
            sheet.password=password;
            close();
            switch(ui->comboBox->currentIndex())
            {
            case 0: {
                sheet.attribute=0;
                UpdateListS(sheet.mycoursehead,sheet.coursehead,sheet.username);
                StudentUI *s=new StudentUI;
                s->show();
                break;
            }
            case 1:{
                sheet.attribute=1;
                UpdateListT(sheet.mycoursehead,sheet.coursehead,sheet.username);
                TeacherUI *t=new TeacherUI;
                t->show();
                break;
            }
            case 2:{
                sheet.attribute=2;
                AdministratorUI *a=new AdministratorUI;
                a->show();
                break;
            }
            }
        }

    }
}
void UserLogin::on_regisButton_clicked()
{
    int attribute=(ui->comboBox->currentIndex())+1;
    QString username=ui->usernamelineEdit->text();
    QString password=ui->passwordlineEdit->text();
    if(!username.isEmpty() && !password.isEmpty())
    {
        int s=LocateElem(sheet.userhead[attribute],username,1);
        if(s!=0)
        {
            QMessageBox::critical(this,"错误提示","此用户名已被注册过。请重新注册。");
        }
        else
        {
            ElemType a;
            a.usertype.attribute=attribute;
            a.usertype.username=username;
            a.usertype.password=password;
            InitList(a.coursetype.mystudent);
            ListInsertF(sheet.userhead[attribute],a);
            QMessageBox::information(this,"华工教务","注册成功！");
        }
    }
}



