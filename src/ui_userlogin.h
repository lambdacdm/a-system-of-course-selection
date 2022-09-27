/********************************************************************************
** Form generated from reading UI file 'userlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERLOGIN_H
#define UI_USERLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserLogin
{
public:
    QPushButton *regisButton;
    QPushButton *exitButton;
    QPushButton *enterButton;
    QLabel *welcomelabel;
    QLabel *idlabel;
    QLabel *usernamelabel;
    QLabel *passwordlabel;
    QLineEdit *usernamelineEdit;
    QLineEdit *passwordlineEdit;
    QComboBox *comboBox;

    void setupUi(QWidget *UserLogin)
    {
        if (UserLogin->objectName().isEmpty())
            UserLogin->setObjectName("UserLogin");
        UserLogin->resize(487, 388);
        regisButton = new QPushButton(UserLogin);
        regisButton->setObjectName("regisButton");
        regisButton->setGeometry(QRect(180, 320, 121, 31));
        exitButton = new QPushButton(UserLogin);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(330, 320, 121, 31));
        enterButton = new QPushButton(UserLogin);
        enterButton->setObjectName("enterButton");
        enterButton->setGeometry(QRect(40, 320, 121, 31));
        welcomelabel = new QLabel(UserLogin);
        welcomelabel->setObjectName("welcomelabel");
        welcomelabel->setGeometry(QRect(180, 60, 101, 31));
        idlabel = new QLabel(UserLogin);
        idlabel->setObjectName("idlabel");
        idlabel->setGeometry(QRect(40, 120, 71, 31));
        usernamelabel = new QLabel(UserLogin);
        usernamelabel->setObjectName("usernamelabel");
        usernamelabel->setGeometry(QRect(40, 180, 71, 21));
        passwordlabel = new QLabel(UserLogin);
        passwordlabel->setObjectName("passwordlabel");
        passwordlabel->setGeometry(QRect(40, 240, 61, 21));
        usernamelineEdit = new QLineEdit(UserLogin);
        usernamelineEdit->setObjectName("usernamelineEdit");
        usernamelineEdit->setGeometry(QRect(160, 180, 211, 31));
        passwordlineEdit = new QLineEdit(UserLogin);
        passwordlineEdit->setObjectName("passwordlineEdit");
        passwordlineEdit->setGeometry(QRect(160, 240, 211, 31));
        comboBox = new QComboBox(UserLogin);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(160, 120, 211, 31));

        retranslateUi(UserLogin);

        QMetaObject::connectSlotsByName(UserLogin);
    } // setupUi

    void retranslateUi(QWidget *UserLogin)
    {
        UserLogin->setWindowTitle(QCoreApplication::translate("UserLogin", "\345\215\216\345\267\245\346\225\231\345\212\241 by\346\235\216\346\203\263", nullptr));
        regisButton->setText(QCoreApplication::translate("UserLogin", "\346\263\250\345\206\214", nullptr));
        exitButton->setText(QCoreApplication::translate("UserLogin", "\351\200\200\345\207\272", nullptr));
        enterButton->setText(QCoreApplication::translate("UserLogin", "\347\231\273\345\275\225", nullptr));
        welcomelabel->setText(QCoreApplication::translate("UserLogin", "\345\215\216\345\267\245\346\225\231\345\212\241", nullptr));
        idlabel->setText(QCoreApplication::translate("UserLogin", "\350\272\253\344\273\275", nullptr));
        usernamelabel->setText(QCoreApplication::translate("UserLogin", "\347\224\250\346\210\267\345\220\215", nullptr));
        passwordlabel->setText(QCoreApplication::translate("UserLogin", "\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserLogin: public Ui_UserLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLOGIN_H
