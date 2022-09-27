#ifndef STUDENTUI_H
#define STUDENTUI_H

#include <QDialog>
#include <QSignalMapper>
namespace Ui {
class StudentUI;
}

class StudentUI : public QDialog
{
    Q_OBJECT

public:
    explicit StudentUI(QWidget *parent = 0);
    ~StudentUI();

    QSignalMapper *myMapper;

private slots:
    void on_sexitButton_clicked();
    void disptablewidget();
    void choose(int i);
    //void drop(int i);

    void on_myButton_clicked();

    void on_f5Button_clicked();

private:
    Ui::StudentUI *ui;
};

#endif // STUDENTUI_H
