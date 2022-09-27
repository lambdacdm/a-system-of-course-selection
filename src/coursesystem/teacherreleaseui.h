#ifndef TEACHERRELEASEUI_H
#define TEACHERRELEASEUI_H

#include <QDialog>

namespace Ui {
class TeacherReleaseUI;
}

class TeacherReleaseUI : public QDialog
{
    Q_OBJECT

public:
    explicit TeacherReleaseUI(QWidget *parent = 0);
    ~TeacherReleaseUI();

private slots:
    void on_noButton_clicked();

    void on_okButton_clicked();

private:
    Ui::TeacherReleaseUI *ui;
};

#endif // TEACHERRELEASEUI_H
