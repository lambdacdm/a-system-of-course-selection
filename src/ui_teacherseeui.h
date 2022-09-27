/********************************************************************************
** Form generated from reading UI file 'teacherseeui.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERSEEUI_H
#define UI_TEACHERSEEUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_TeacherSeeUI
{
public:
    QLabel *label;
    QFrame *line;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QTableWidget *tableWidget2;

    void setupUi(QDialog *TeacherSeeUI)
    {
        if (TeacherSeeUI->objectName().isEmpty())
            TeacherSeeUI->setObjectName("TeacherSeeUI");
        TeacherSeeUI->resize(746, 573);
        label = new QLabel(TeacherSeeUI);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 30, 121, 31));
        line = new QFrame(TeacherSeeUI);
        line->setObjectName("line");
        line->setGeometry(QRect(420, 30, 20, 501));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        tableWidget = new QTableWidget(TeacherSeeUI);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(40, 90, 341, 431));
        label_2 = new QLabel(TeacherSeeUI);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(500, 40, 121, 31));
        tableWidget2 = new QTableWidget(TeacherSeeUI);
        tableWidget2->setObjectName("tableWidget2");
        tableWidget2->setGeometry(QRect(460, 90, 256, 431));

        retranslateUi(TeacherSeeUI);

        QMetaObject::connectSlotsByName(TeacherSeeUI);
    } // setupUi

    void retranslateUi(QDialog *TeacherSeeUI)
    {
        TeacherSeeUI->setWindowTitle(QCoreApplication::translate("TeacherSeeUI", "\345\215\216\345\267\245\346\225\231\345\212\241", nullptr));
        label->setText(QCoreApplication::translate("TeacherSeeUI", "\350\257\276\347\250\213\344\277\241\346\201\257", nullptr));
        label_2->setText(QCoreApplication::translate("TeacherSeeUI", "\345\255\246\347\224\237\345\220\215\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherSeeUI: public Ui_TeacherSeeUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERSEEUI_H
