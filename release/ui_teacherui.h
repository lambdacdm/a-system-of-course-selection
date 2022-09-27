/********************************************************************************
** Form generated from reading UI file 'teacherui.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERUI_H
#define UI_TEACHERUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_TeacherUI
{
public:
    QLabel *twelcomelabel;
    QFrame *tline;
    QPushButton *texitButton;
    QTableWidget *tableWidget;
    QPushButton *releaseButton;
    QPushButton *f5Button;

    void setupUi(QDialog *TeacherUI)
    {
        if (TeacherUI->objectName().isEmpty())
            TeacherUI->setObjectName("TeacherUI");
        TeacherUI->resize(904, 740);
        twelcomelabel = new QLabel(TeacherUI);
        twelcomelabel->setObjectName("twelcomelabel");
        twelcomelabel->setGeometry(QRect(70, 20, 201, 31));
        tline = new QFrame(TeacherUI);
        tline->setObjectName("tline");
        tline->setGeometry(QRect(40, 70, 821, 20));
        tline->setFrameShape(QFrame::HLine);
        tline->setFrameShadow(QFrame::Sunken);
        texitButton = new QPushButton(TeacherUI);
        texitButton->setObjectName("texitButton");
        texitButton->setGeometry(QRect(750, 20, 111, 31));
        tableWidget = new QTableWidget(TeacherUI);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(40, 130, 831, 531));
        releaseButton = new QPushButton(TeacherUI);
        releaseButton->setObjectName("releaseButton");
        releaseButton->setGeometry(QRect(600, 20, 111, 31));
        f5Button = new QPushButton(TeacherUI);
        f5Button->setObjectName("f5Button");
        f5Button->setGeometry(QRect(450, 20, 111, 31));

        retranslateUi(TeacherUI);

        QMetaObject::connectSlotsByName(TeacherUI);
    } // setupUi

    void retranslateUi(QDialog *TeacherUI)
    {
        TeacherUI->setWindowTitle(QCoreApplication::translate("TeacherUI", "\345\215\216\345\267\245\346\225\231\345\212\241 \346\225\231\345\270\210\345\271\263\345\217\260", nullptr));
        twelcomelabel->setText(QCoreApplication::translate("TeacherUI", "TextLabel", nullptr));
        texitButton->setText(QCoreApplication::translate("TeacherUI", "\351\200\200\345\207\272\350\264\246\345\217\267", nullptr));
        releaseButton->setText(QCoreApplication::translate("TeacherUI", "\345\217\221\345\270\203\350\257\276\347\250\213", nullptr));
        f5Button->setText(QCoreApplication::translate("TeacherUI", "\345\210\267\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherUI: public Ui_TeacherUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERUI_H
