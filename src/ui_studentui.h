/********************************************************************************
** Form generated from reading UI file 'studentui.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTUI_H
#define UI_STUDENTUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentUI
{
public:
    QLabel *swelcomelabel;
    QFrame *sline;
    QPushButton *sexitButton;
    QTableWidget *tableWidget;
    QPushButton *myButton;
    QPushButton *f5Button;

    void setupUi(QDialog *StudentUI)
    {
        if (StudentUI->objectName().isEmpty())
            StudentUI->setObjectName("StudentUI");
        StudentUI->resize(904, 740);
        swelcomelabel = new QLabel(StudentUI);
        swelcomelabel->setObjectName("swelcomelabel");
        swelcomelabel->setGeometry(QRect(70, 20, 201, 31));
        sline = new QFrame(StudentUI);
        sline->setObjectName("sline");
        sline->setGeometry(QRect(40, 60, 821, 20));
        sline->setFrameShape(QFrame::HLine);
        sline->setFrameShadow(QFrame::Sunken);
        sexitButton = new QPushButton(StudentUI);
        sexitButton->setObjectName("sexitButton");
        sexitButton->setGeometry(QRect(720, 20, 121, 31));
        tableWidget = new QTableWidget(StudentUI);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(40, 140, 831, 531));
        myButton = new QPushButton(StudentUI);
        myButton->setObjectName("myButton");
        myButton->setGeometry(QRect(550, 20, 131, 31));
        f5Button = new QPushButton(StudentUI);
        f5Button->setObjectName("f5Button");
        f5Button->setGeometry(QRect(380, 20, 121, 31));

        retranslateUi(StudentUI);

        QMetaObject::connectSlotsByName(StudentUI);
    } // setupUi

    void retranslateUi(QDialog *StudentUI)
    {
        StudentUI->setWindowTitle(QCoreApplication::translate("StudentUI", "\345\215\216\345\267\245\346\225\231\345\212\241 \345\255\246\347\224\237\345\271\263\345\217\260", nullptr));
        swelcomelabel->setText(QCoreApplication::translate("StudentUI", "\345\255\246\347\224\237", nullptr));
        sexitButton->setText(QCoreApplication::translate("StudentUI", "\351\200\200\345\207\272\350\264\246\345\217\267", nullptr));
        myButton->setText(QCoreApplication::translate("StudentUI", "\346\210\221\347\232\204\350\257\276\350\241\250", nullptr));
        f5Button->setText(QCoreApplication::translate("StudentUI", "\345\210\267\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentUI: public Ui_StudentUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTUI_H
