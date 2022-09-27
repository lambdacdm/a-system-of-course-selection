#ifndef TEACHERSEEUI_H
#define TEACHERSEEUI_H

#include <QDialog>

namespace Ui {
class TeacherSeeUI;
}

class TeacherSeeUI : public QDialog
{
    Q_OBJECT

public:
    explicit TeacherSeeUI(QWidget *parent = 0);
    ~TeacherSeeUI();

private:
    Ui::TeacherSeeUI *ui;
};

#endif // TEACHERSEEUI_H
