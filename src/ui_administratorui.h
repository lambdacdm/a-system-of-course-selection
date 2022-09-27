/********************************************************************************
** Form generated from reading UI file 'administratorui.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATORUI_H
#define UI_ADMINISTRATORUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_AdministratorUI
{
public:
    QLabel *awelcomelabel;
    QFrame *aline;
    QPushButton *aexitButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *outButton;
    QPushButton *inButton;
    QFrame *line;
    QLabel *label_2;
    QLabel *label_3;
    QTableWidget *coursetableWidget;
    QTableWidget *usertableWidget;
    QPushButton *f5Button;

    void setupUi(QDialog *AdministratorUI)
    {
        if (AdministratorUI->objectName().isEmpty())
            AdministratorUI->setObjectName("AdministratorUI");
        AdministratorUI->resize(1200, 900);
        awelcomelabel = new QLabel(AdministratorUI);
        awelcomelabel->setObjectName("awelcomelabel");
        awelcomelabel->setGeometry(QRect(80, 20, 191, 31));
        aline = new QFrame(AdministratorUI);
        aline->setObjectName("aline");
        aline->setGeometry(QRect(60, 150, 1081, 20));
        aline->setFrameShape(QFrame::HLine);
        aline->setFrameShadow(QFrame::Sunken);
        aexitButton = new QPushButton(AdministratorUI);
        aexitButton->setObjectName("aexitButton");
        aexitButton->setGeometry(QRect(1020, 20, 111, 31));
        label = new QLabel(AdministratorUI);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 80, 151, 41));
        lineEdit = new QLineEdit(AdministratorUI);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(180, 80, 621, 41));
        outButton = new QPushButton(AdministratorUI);
        outButton->setObjectName("outButton");
        outButton->setGeometry(QRect(1020, 80, 111, 31));
        inButton = new QPushButton(AdministratorUI);
        inButton->setObjectName("inButton");
        inButton->setGeometry(QRect(850, 80, 111, 31));
        line = new QFrame(AdministratorUI);
        line->setObjectName("line");
        line->setGeometry(QRect(680, 200, 20, 661));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(AdministratorUI);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(210, 190, 191, 31));
        label_3 = new QLabel(AdministratorUI);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(840, 200, 171, 31));
        coursetableWidget = new QTableWidget(AdministratorUI);
        coursetableWidget->setObjectName("coursetableWidget");
        coursetableWidget->setGeometry(QRect(50, 240, 591, 611));
        usertableWidget = new QTableWidget(AdministratorUI);
        usertableWidget->setObjectName("usertableWidget");
        usertableWidget->setGeometry(QRect(730, 240, 421, 611));
        f5Button = new QPushButton(AdministratorUI);
        f5Button->setObjectName("f5Button");
        f5Button->setGeometry(QRect(850, 20, 111, 31));

        retranslateUi(AdministratorUI);

        QMetaObject::connectSlotsByName(AdministratorUI);
    } // setupUi

    void retranslateUi(QDialog *AdministratorUI)
    {
        AdministratorUI->setWindowTitle(QCoreApplication::translate("AdministratorUI", "\345\215\216\345\267\245\346\225\231\345\212\241 \347\256\241\347\220\206\345\221\230\345\271\263\345\217\260", nullptr));
        awelcomelabel->setText(QCoreApplication::translate("AdministratorUI", "TextLabel", nullptr));
        aexitButton->setText(QCoreApplication::translate("AdministratorUI", "\351\200\200\345\207\272\350\264\246\345\217\267", nullptr));
        label->setText(QCoreApplication::translate("AdministratorUI", "\346\226\207\344\273\266\345\220\215", nullptr));
        outButton->setText(QCoreApplication::translate("AdministratorUI", "\345\257\274\345\207\272", nullptr));
        inButton->setText(QCoreApplication::translate("AdministratorUI", "\345\257\274\345\205\245", nullptr));
        label_2->setText(QCoreApplication::translate("AdministratorUI", "\350\257\276\347\250\213\344\277\241\346\201\257", nullptr));
        label_3->setText(QCoreApplication::translate("AdministratorUI", "\347\224\250\346\210\267\344\277\241\346\201\257", nullptr));
        f5Button->setText(QCoreApplication::translate("AdministratorUI", "\345\210\267\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdministratorUI: public Ui_AdministratorUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATORUI_H
