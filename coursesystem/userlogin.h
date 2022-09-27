#ifndef USERLOGIN_H
#define USERLOGIN_H

#include <QWidget>
//#include "studentui.h"
//#include "teacherui.h"
//#include "administratorui.h"

namespace Ui {
class UserLogin;
}

class UserLogin : public QWidget
{
    Q_OBJECT

public:
    explicit UserLogin(QWidget *parent = 0);
    ~UserLogin();

private slots:
    void on_exitButton_clicked();
    void on_enterButton_clicked();
    void on_regisButton_clicked();

private:
    Ui::UserLogin *ui;
    //StudentUI *s;
    //TeacherUI *t;
    //AdministratorUI *a;
};

#endif // USERLOGIN_H
