#include "administratorui.h"
#include "ui_administratorui.h"
#include "datastr.h"
#include "userlogin.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
extern course sheet;
AdministratorUI::AdministratorUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdministratorUI)
{
    ui->setupUi(this);
    ui->awelcomelabel->setText("欢迎你，"+sheet.username);

    ui->coursetableWidget->setColumnCount(7);
    ui->coursetableWidget->setRowCount(100);
    QStringList header;
    header<<"课程编号"<<"课程名称"<<"课程老师"<<"上课时间"<<"上课地点"
         <<"已选人数"<<"课程容量";
    ui->coursetableWidget->setHorizontalHeaderLabels(header);
    dispcourse();

    ui->usertableWidget->setColumnCount(3);
    ui->usertableWidget->setRowCount(100);
    QStringList header2;
    header2<<"身份"<<"用户名"<<"密码";
    ui->usertableWidget->setHorizontalHeaderLabels(header2);
    dispuser();
}

AdministratorUI::~AdministratorUI()
{
    delete ui;
}

void AdministratorUI::on_aexitButton_clicked()
{
    close();
    UserLogin *u=new UserLogin;
    u->show();
}

void AdministratorUI::dispcourse()
{
    ui->coursetableWidget->clearContents();
    LinkNode *p=new LinkNode;
    p=sheet.coursehead->next;
    int row=0;
    while(p!=NULL)
    {
        ui->coursetableWidget->setItem(row,0,new QTableWidgetItem(QString::number(p->data.coursetype.courseid)));
        ui->coursetableWidget->setItem(row,1,new QTableWidgetItem(p->data.coursetype.coursename));
        ui->coursetableWidget->setItem(row,2,new QTableWidgetItem(p->data.coursetype.courseteacher));
        ui->coursetableWidget->setItem(row,3,new QTableWidgetItem(p->data.coursetype.coursetime));
        ui->coursetableWidget->setItem(row,4,new QTableWidgetItem(p->data.coursetype.courseroom));
        ui->coursetableWidget->setItem(row,5,new QTableWidgetItem(QString::number(p->data.coursetype.coursepop)));
        ui->coursetableWidget->setItem(row,6,new QTableWidgetItem(QString::number(p->data.coursetype.coursemax)));

        p=p->next;
        ++row;
    }
}

void AdministratorUI::dispuser()
{
    ui->usertableWidget->clearContents();
    LinkNode *p=new LinkNode;
    p=sheet.userhead[1]->next;
    int row=0;
    while(p!=NULL)
    {
        ui->usertableWidget->setItem(row,0,new QTableWidgetItem("学生"));
        ui->usertableWidget->setItem(row,1,new QTableWidgetItem(p->data.usertype.username));
        ui->usertableWidget->setItem(row,2,new QTableWidgetItem(p->data.usertype.password));
        p=p->next;
        ++row;
    }
    LinkNode *q=new LinkNode;
    q=sheet.userhead[2]->next;
    while(q!=NULL)
    {
        ui->usertableWidget->setItem(row,0,new QTableWidgetItem("教师"));
        ui->usertableWidget->setItem(row,1,new QTableWidgetItem(q->data.usertype.username));
        ui->usertableWidget->setItem(row,2,new QTableWidgetItem(q->data.usertype.password));
        q=q->next;
        ++row;
    }
}


void AdministratorUI::on_f5Button_clicked()
{
    dispcourse();
    dispuser();
}

void AdministratorUI::on_outButton_clicked()
{
    QFile file(ui->lineEdit->text());
    file.open(QFileDevice::WriteOnly);
    QTextStream outfile(&file);
    DispHead(sheet.userhead[1],outfile);
    DispHead(sheet.userhead[2],outfile);
    DispHead(sheet.coursehead,outfile);
    file.close();
    QMessageBox::information(this,"华工教务","导出成功！");
}

void AdministratorUI::on_inButton_clicked()
{
    if(ui->lineEdit->text().isEmpty())
    {
        QMessageBox::critical(this,"错误提示","文件名不能为空！");
        return;
    }
    QFile file(ui->lineEdit->text());
    file.open(QFileDevice::ReadOnly);
    if (!file.exists())
    {
        QMessageBox::warning(NULL, "warning", "文件不存在！");
        return;
    }
    QTextStream infile(&file);
    QString k=infile.readLine();
    bool istrue=ReadIn(sheet.coursehead,sheet.userhead,k,sheet.courseid);
    file.close();
    if(istrue==false)
    {
        QMessageBox::critical(this,"错误提示","导入失败！");
        return;
    }
    dispcourse();
    dispuser();
    QMessageBox::information(this,"华工教务","导入成功！");
}
