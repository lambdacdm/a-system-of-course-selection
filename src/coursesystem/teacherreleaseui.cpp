#include "teacherreleaseui.h"
#include "ui_teacherreleaseui.h"
#include "datastr.h"
#include "teacherui.h"
#include <QMessageBox>
#include <QDebug>
extern course sheet;

TeacherReleaseUI::TeacherReleaseUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TeacherReleaseUI)
{
    ui->setupUi(this);
}

TeacherReleaseUI::~TeacherReleaseUI()
{
    delete ui;
}

void TeacherReleaseUI::on_noButton_clicked()
{
    TeacherUI *t=new TeacherUI;
    close();
    t->show();
}

void TeacherReleaseUI::on_okButton_clicked()
{
    if(ui->coursenameLineEdit->text().isEmpty()==true)
    {
        QMessageBox::critical(this,"错误提示","课程名称不能为空！");
        return;
    }
    if(ui->coursemaxLineEdit->text().toInt()<0)
    {
        QMessageBox::critical(this,"错误提示","无效的课程容量。");
        return;
    }
    ElemType newc;
    newc.coursetype.coursename=ui->coursenameLineEdit->text();
    newc.coursetype.coursetime=ui->coursetimeLineEdit->text();
    newc.coursetype.courseroom=ui->courseroomLineEdit->text();
    newc.coursetype.coursemax=ui->coursemaxLineEdit->text().toInt();
    newc.coursetype.courseteacher=sheet.username;
    newc.coursetype.courseid=sheet.courseid++;
    newc.coursetype.coursepop=0;
    newc.usertype.attribute=0;//课程的属性定为0
    InitList(newc.coursetype.mystudent);
    ListInsertF(sheet.coursehead,newc);
    ListInsertF(sheet.mycoursehead,newc);
    QMessageBox::information(this,"华工教务","发布成功！");
}
