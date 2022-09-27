#include "studentui.h"
#include "ui_studentui.h"
#include "datastr.h"
#include "userlogin.h"
#include <QMessageBox>
#include <QDebug>
#include <QSignalMapper>
extern course sheet;

StudentUI::StudentUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentUI)
{
    ui->setupUi(this);
    ui->swelcomelabel->setText("欢迎你，"+sheet.username);
    myMapper=new QSignalMapper();

    ui->tableWidget->setColumnCount(9);
    ui->tableWidget->setRowCount(100);
    QStringList header;
    header<<"课程编号"<<"课程名称"<<"课程老师"<<"上课时间"<<"上课地点"
         <<"已选人数"<<"课程容量"<<"状态"<<"选课/退课";
    ui->tableWidget->setHorizontalHeaderLabels(header);
    disptablewidget();

    connect(myMapper,SIGNAL(mapped(int)),this,SLOT(choose(int)));
}

StudentUI::~StudentUI()
{
    delete ui;
}

void StudentUI::on_sexitButton_clicked()
{
    close();
    UserLogin *u=new UserLogin;
    u->show();
}

void StudentUI::disptablewidget()//暂时这么写着
{
    ui->tableWidget->clearContents();
    LinkNode *p=new LinkNode;
    p=sheet.coursehead->next;
    int row=0;
    ElemType e;
    while(p!=NULL)
    {
        e=p->data;

        ui->tableWidget->setItem(row,0,new QTableWidgetItem(QString::number(e.coursetype.courseid)));
        ui->tableWidget->setItem(row,1,new QTableWidgetItem(e.coursetype.coursename));
        ui->tableWidget->setItem(row,2,new QTableWidgetItem(e.coursetype.courseteacher));
        ui->tableWidget->setItem(row,3,new QTableWidgetItem(e.coursetype.coursetime));
        ui->tableWidget->setItem(row,4,new QTableWidgetItem(e.coursetype.courseroom));
        ui->tableWidget->setItem(row,5,new QTableWidgetItem(QString::number(e.coursetype.coursepop)));
        ui->tableWidget->setItem(row,6,new QTableWidgetItem(QString::number(e.coursetype.coursemax)));

        QPushButton *okButton=new QPushButton;
        int k=LocateElem(sheet.mycoursehead,e.coursetype.courseid,2);
        if(k==0)
        {
            ui->tableWidget->setItem(row,7,new QTableWidgetItem("未选"));
            okButton->setText("选课");         
        }
        else
        {
            ui->tableWidget->setItem(row,7,new QTableWidgetItem("已选上"));
            okButton->setText("退课");
        }
        ui->tableWidget->setCellWidget(row,8,okButton);

        for(int j=0;j<8;++j)
        {
            ui->tableWidget->item(row, j)->setFlags((Qt::ItemFlags) 0);
        }

        connect(okButton,SIGNAL(clicked()),myMapper,SLOT(map()));
        myMapper->setMapping(okButton,row);

        p=p->next;
        ++row;
    }
}

void StudentUI::choose(int i)
{
    QString temp=ui->tableWidget->item(i,0)->text();
    LinkNode *point=new LinkNode;
    int p=LocateElem(sheet.coursehead,temp,2);
    GetElem(sheet.coursehead,p,point);
    int q=LocateElem(sheet.mycoursehead,temp,2);
    ElemType e;
    if(q!=0)
    {
        ListDelete(sheet.mycoursehead,q,e);
        //从这行往下更新总数据库信息
        LinkNode *qtr=point->data.coursetype.mystudent;
        int sp=LocateElem(qtr,sheet.username,1);
        ListDelete(qtr,sp,e);
        --(point->data.coursetype.coursepop);//从这行往上更新总数据库信息
        disptablewidget();
        QMessageBox::information(this,"华工教务","退课成功！");
        return;
    }
    if(ui->tableWidget->item(i,5)->text().toInt()>=
            ui->tableWidget->item(i,6)->text().toInt())
    {
        QMessageBox::critical(this,"错误提示","课程人数已满，无法选上。");
        return;
    }
    ++(point->data.coursetype.coursepop);//更新课程余量信息
    ListInsertR(point->data.coursetype.mystudent,sheet.user);
    ListInsertR(sheet.mycoursehead,point->data);
    disptablewidget();
    QMessageBox::information(this,"华工教务","选课成功！");
}

void StudentUI::on_myButton_clicked()
{
    if(ui->myButton->text()=="所有课程列表")
    {
        for(int i=0;i<ListLength(sheet.coursehead);++i)
        {
            if(ui->tableWidget->item(i,7)->text()=="未选")
            {
                ui->tableWidget->showRow(i);
            }
        }
        ui->myButton->setText("我的课表");
        return;
    }
    for(int i=0;i<ListLength(sheet.coursehead);++i)
    {
        if(ui->tableWidget->item(i,7)->text()=="未选")
        {
            ui->tableWidget->hideRow(i);
        }
    }
    ui->myButton->setText("所有课程列表");
}

void StudentUI::on_f5Button_clicked()
{
    disptablewidget();
}
