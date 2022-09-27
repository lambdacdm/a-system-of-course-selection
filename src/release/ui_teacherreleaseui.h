/********************************************************************************
** Form generated from reading UI file 'teacherreleaseui.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERRELEASEUI_H
#define UI_TEACHERRELEASEUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeacherReleaseUI
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *coursenameLabel;
    QLineEdit *coursenameLineEdit;
    QLabel *coursetimeLabel;
    QLineEdit *coursetimeLineEdit;
    QLabel *courseroomLabel;
    QLabel *coursemaxLabel;
    QLineEdit *coursemaxLineEdit;
    QLineEdit *courseroomLineEdit;
    QPushButton *okButton;
    QPushButton *noButton;
    QLabel *label;

    void setupUi(QDialog *TeacherReleaseUI)
    {
        if (TeacherReleaseUI->objectName().isEmpty())
            TeacherReleaseUI->setObjectName("TeacherReleaseUI");
        TeacherReleaseUI->resize(400, 300);
        formLayoutWidget = new QWidget(TeacherReleaseUI);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(70, 80, 241, 161));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        coursenameLabel = new QLabel(formLayoutWidget);
        coursenameLabel->setObjectName("coursenameLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, coursenameLabel);

        coursenameLineEdit = new QLineEdit(formLayoutWidget);
        coursenameLineEdit->setObjectName("coursenameLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, coursenameLineEdit);

        coursetimeLabel = new QLabel(formLayoutWidget);
        coursetimeLabel->setObjectName("coursetimeLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, coursetimeLabel);

        coursetimeLineEdit = new QLineEdit(formLayoutWidget);
        coursetimeLineEdit->setObjectName("coursetimeLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, coursetimeLineEdit);

        courseroomLabel = new QLabel(formLayoutWidget);
        courseroomLabel->setObjectName("courseroomLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, courseroomLabel);

        coursemaxLabel = new QLabel(formLayoutWidget);
        coursemaxLabel->setObjectName("coursemaxLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, coursemaxLabel);

        coursemaxLineEdit = new QLineEdit(formLayoutWidget);
        coursemaxLineEdit->setObjectName("coursemaxLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, coursemaxLineEdit);

        courseroomLineEdit = new QLineEdit(formLayoutWidget);
        courseroomLineEdit->setObjectName("courseroomLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, courseroomLineEdit);

        okButton = new QPushButton(TeacherReleaseUI);
        okButton->setObjectName("okButton");
        okButton->setGeometry(QRect(40, 250, 111, 31));
        noButton = new QPushButton(TeacherReleaseUI);
        noButton->setObjectName("noButton");
        noButton->setGeometry(QRect(220, 250, 111, 31));
        label = new QLabel(TeacherReleaseUI);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 30, 141, 31));

        retranslateUi(TeacherReleaseUI);

        QMetaObject::connectSlotsByName(TeacherReleaseUI);
    } // setupUi

    void retranslateUi(QDialog *TeacherReleaseUI)
    {
        TeacherReleaseUI->setWindowTitle(QCoreApplication::translate("TeacherReleaseUI", "\345\215\216\345\267\245\346\225\231\345\212\241", nullptr));
        coursenameLabel->setText(QCoreApplication::translate("TeacherReleaseUI", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        coursetimeLabel->setText(QCoreApplication::translate("TeacherReleaseUI", "\344\270\212\350\257\276\346\227\266\351\227\264", nullptr));
        courseroomLabel->setText(QCoreApplication::translate("TeacherReleaseUI", "\344\270\212\350\257\276\345\234\260\347\202\271", nullptr));
        coursemaxLabel->setText(QCoreApplication::translate("TeacherReleaseUI", "\350\257\276\347\250\213\345\256\271\351\207\217", nullptr));
        okButton->setText(QCoreApplication::translate("TeacherReleaseUI", "\347\241\256\345\256\232", nullptr));
        noButton->setText(QCoreApplication::translate("TeacherReleaseUI", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("TeacherReleaseUI", "\345\217\221\345\270\203\350\257\276\347\250\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherReleaseUI: public Ui_TeacherReleaseUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERRELEASEUI_H
