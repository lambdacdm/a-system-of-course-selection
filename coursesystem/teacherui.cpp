#include "teacherui.h"
#include "ui_teacherui.h"
#include "datastr.h"
#include "userlogin.h"
#include "teacherreleaseui.h"
#include "teacherseeui.h"
#include <QMessageBox>
#include <QComboBox>
#include<QStandardItem>
#include<QDebug>
#include <QPushButton>
extern course sheet;

TeacherUI::TeacherUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TeacherUI)
{
    ui->setupUi(this);
    ui->twelcomelabel->setText("欢迎你，"+sheet.username);
    myMapperd=new QSignalMapper();
    myMappere=new QSignalMapper();
    myMappers=new QSignalMapper();

    ui->tableWidget->setColumnCount(10);
    ui->tableWidget->setRowCount(100);
    QStringList header;
    header<<"课程编号"<<"课程名称"<<"课程老师"<<"上课时间"<<"上课地点"
         <<"已选人数"<<"课程容量"<<"查看"<<"保存修改"<<"删除";
    ui->tableWidget->setHorizontalHeaderLabels(header);

    disptablewidget();
    connect(myMappere,SIGNAL(mapped(int)),this,SLOT(editrow(int)));
    connect(myMapperd,SIGNAL(mapped(int)),this,SLOT(deleterow(int)));
    connect(myMappers,SIGNAL(mapped(int)),this,SLOT(seerow(int)));
}

TeacherUI::~TeacherUI()
{
    delete ui;
}

void TeacherUI::on_texitButton_clicked()
{
    close();
    UserLogin *u=new UserLogin;
    u->show();
}

void TeacherUI::disptablewidget()
{
    ui->tableWidget->clearContents();
    LinkNode *p=new LinkNode;
    p=sheet.mycoursehead->next;
    int row=0;
    while(p!=NULL)
    {
        ui->tableWidget->setItem(row,0,new QTableWidgetItem(QString::number(p->data.coursetype.courseid)));
        ui->tableWidget->setItem(row,1,new QTableWidgetItem(p->data.coursetype.coursename));
        ui->tableWidget->setItem(row,2,new QTableWidgetItem(p->data.coursetype.courseteacher));
        ui->tableWidget->setItem(row,3,new QTableWidgetItem(p->data.coursetype.coursetime));
        ui->tableWidget->setItem(row,4,new QTableWidgetItem(p->data.coursetype.courseroom));
        ui->tableWidget->setItem(row,5,new QTableWidgetItem(QString::number(p->data.coursetype.coursepop)));
        ui->tableWidget->setItem(row,6,new QTableWidgetItem(QString::number(p->data.coursetype.coursemax)));

        ui->tableWidget->item(row, 0)->setFlags((Qt::ItemFlags) 0);
        ui->tableWidget->item(row, 2)->setFlags((Qt::ItemFlags) 0);
        ui->tableWidget->item(row, 5)->setFlags((Qt::ItemFlags) 0);

        QPushButton *seeButton=new QPushButton("查看");
        QPushButton *editButton=new QPushButton("保存修改");
        QPushButton *deleteButton=new QPushButton("删除");
        ui->tableWidget->setCellWidget(row,7,seeButton);
        ui->tableWidget->setCellWidget(row,8,editButton);
        ui->tableWidget->setCellWidget(row,9,deleteButton);
        connect(seeButton,SIGNAL(clicked()),myMappers,SLOT(map()));
        connect(editButton,SIGNAL(clicked()),myMappere,SLOT(map()));
        connect(deleteButton,SIGNAL(clicked()),myMapperd,SLOT(map()));
        myMappers->setMapping(seeButton,row);
        myMappere->setMapping(editButton,row);
        myMapperd->setMapping(deleteButton,row);

        p=p->next;
        ++row;
    }
}


void TeacherUI::on_releaseButton_clicked()
{
    TeacherReleaseUI *r=new TeacherReleaseUI(this);
    close();
    r->show();
}
void TeacherUI::deleterow(int i)
{
    QString temp=ui->tableWidget->item(i,0)->text();
    ElemType e;
    int p=LocateElem(sheet.mycoursehead,temp,2);
    int q=LocateElem(sheet.coursehead,temp,2);
    ListDelete(sheet.mycoursehead,p,e);
    ListDelete(sheet.coursehead,q,e);
    ui->tableWidget->removeRow(i);
    QMessageBox::information(this,"华工教务","删除成功！");
}
void TeacherUI::editrow(int i)
{
    if(ui->tableWidget->item(i,1)->text().isEmpty())
    {
        QMessageBox::critical(this,"错误提示","课程名称不能为空！");
        return;
    }
    if(ui->tableWidget->item(i,5)->text().toInt()>
            ui->tableWidget->item(i,6)->text().toInt())
    {
        QMessageBox::critical(this,"错误提示","课程容量不能减至已选人数之下！");
        return;
    }
    if(ui->tableWidget->item(i,6)->text().toInt()<0)
    {
        QMessageBox::critical(this,"错误提示","无效的课程容量。");
        return;
    }
    QString temp=ui->tableWidget->item(i,0)->text();
    ElemType e;
    int p=LocateElem(sheet.mycoursehead,temp,2);
    int q=LocateElem(sheet.coursehead,temp,2);
    ListDelete(sheet.mycoursehead,p,e);
    ListDelete(sheet.coursehead,q,e);
    e.coursetype.coursename=ui->tableWidget->item(i,1)->text();
    e.coursetype.coursetime=ui->tableWidget->item(i,3)->text();
    e.coursetype.courseroom=ui->tableWidget->item(i,4)->text();
    e.coursetype.coursemax=ui->tableWidget->item(i,6)->text().toInt();
    ListInsertF(sheet.mycoursehead,e);
    ListInsertF(sheet.coursehead,e);
    QMessageBox::information(this,"华工教务","保存修改成功！");
}
void TeacherUI::seerow(int i)
{
    sheet.nowid=ui->tableWidget->item(i,0)->text().toInt();
    TeacherSeeUI *s=new TeacherSeeUI;
    s->show();
}

void TeacherUI::on_f5Button_clicked()
{
    disptablewidget();
}
