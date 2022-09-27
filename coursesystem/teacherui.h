#ifndef TEACHERUI_H
#define TEACHERUI_H

#include <QDialog>
#include<QComboBox>
#include<QStandardItemModel>
#include<QSignalMapper>
namespace Ui {
class TeacherUI;
}

class TeacherUI : public QDialog
{
    Q_OBJECT

public:
    explicit TeacherUI(QWidget *parent = 0);
    ~TeacherUI();

    QSignalMapper *myMapperd;
    QSignalMapper *myMappers;
    QSignalMapper *myMappere;
private slots:
    void on_texitButton_clicked();
    void disptablewidget();
    void on_releaseButton_clicked();
    void deleterow(int i);
    void editrow(int i);
    void seerow(int i);

    void on_f5Button_clicked();

private:
    Ui::TeacherUI *ui;
};

#endif // TEACHERUI_H
