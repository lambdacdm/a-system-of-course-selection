#ifndef ADMINISTRATORUI_H
#define ADMINISTRATORUI_H

#include <QDialog>

namespace Ui {
class AdministratorUI;
}

class AdministratorUI : public QDialog
{
    Q_OBJECT

public:
    explicit AdministratorUI(QWidget *parent = 0);
    ~AdministratorUI();

private slots:
    void on_aexitButton_clicked();
    void dispcourse();
    void dispuser();

    void on_f5Button_clicked();

    void on_outButton_clicked();

    void on_inButton_clicked();

private:
    Ui::AdministratorUI *ui;
};

#endif // ADMINISTRATORUI_H
