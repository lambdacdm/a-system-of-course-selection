#include "teacherseeui.h"
#include "ui_teacherseeui.h"
#include "datastr.h"
extern course sheet;

TeacherSeeUI::TeacherSeeUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TeacherSeeUI)
{
    ui->setupUi(this);

    int index=LocateElem(sheet.mycoursehead,sheet.nowid,2);
    LinkNode *p=new LinkNode;
    GetElem(sheet.mycoursehead,index,p);

    ui->tableWidget->setColumnCount(1);
    ui->tableWidget->setRowCount(7);
    QStringList header;
    header<<"课程编号"<<"课程名称"<<"课程老师"<<"上课时间"<<"上课地点"
         <<"已选人数"<<"课程容量";
    ui->tableWidget->setVerticalHeaderLabels(header);
    QStringList headerc;
    headerc<<"信息";
    ui->tableWidget->setHorizontalHeaderLabels(headerc);

    ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString::number(p->data.coursetype.courseid)));
    ui->tableWidget->setItem(1,0,new QTableWidgetItem(p->data.coursetype.coursename));
    ui->tableWidget->setItem(2,0,new QTableWidgetItem(p->data.coursetype.courseteacher));
    ui->tableWidget->setItem(3,0,new QTableWidgetItem(p->data.coursetype.coursetime));
    ui->tableWidget->setItem(4,0,new QTableWidgetItem(p->data.coursetype.courseroom));
    ui->tableWidget->setItem(5,0,new QTableWidgetItem(QString::number(p->data.coursetype.coursepop)));
    ui->tableWidget->setItem(6,0,new QTableWidgetItem(QString::number(p->data.coursetype.coursemax)));

    ui->tableWidget2->setColumnCount(1);
    ui->tableWidget2->setRowCount(ListLength(p->data.coursetype.mystudent));
    QStringList headerh;
    headerh<<"学生姓名";
    ui->tableWidget2->setHorizontalHeaderLabels(headerh);
    LinkNode *s=new LinkNode;
    s=p->data.coursetype.mystudent->next;
    int ep=0;
    while(s!=NULL)
    {
        ui->tableWidget2->setItem(ep,0,new QTableWidgetItem(s->data.usertype.username));
        ++ep;
        s=s->next;
    }
}

TeacherSeeUI::~TeacherSeeUI()
{
    delete ui;
}
