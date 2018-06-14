/********************************************************************************
** Form generated from reading UI file 'Login.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QLabel *label_account;
    QLabel *label_password;
    QLabel *label_info;
    QLineEdit *textAccount;
    QLineEdit *textPassword;
    QCheckBox *CodeMode;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 250, 351, 33));
        hboxLayout = new QHBoxLayout(layoutWidget);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(layoutWidget);
        okButton->setObjectName(QStringLiteral("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout->addWidget(cancelButton);

        label_account = new QLabel(Dialog);
        label_account->setObjectName(QStringLiteral("label_account"));
        label_account->setGeometry(QRect(90, 20, 72, 15));
        label_password = new QLabel(Dialog);
        label_password->setObjectName(QStringLiteral("label_password"));
        label_password->setGeometry(QRect(90, 110, 72, 15));
        label_info = new QLabel(Dialog);
        label_info->setObjectName(QStringLiteral("label_info"));
        label_info->setGeometry(QRect(40, 190, 301, 31));
        QFont font;
        font.setPointSize(13);
        label_info->setFont(font);
        textAccount = new QLineEdit(Dialog);
        textAccount->setObjectName(QStringLiteral("textAccount"));
        textAccount->setGeometry(QRect(90, 40, 201, 41));
        QFont font1;
        font1.setPointSize(16);
        textAccount->setFont(font1);
        textPassword = new QLineEdit(Dialog);
        textPassword->setObjectName(QStringLiteral("textPassword"));
        textPassword->setGeometry(QRect(90, 130, 201, 41));
        textPassword->setFont(font1);
        CodeMode = new QCheckBox(Dialog);
        CodeMode->setObjectName(QStringLiteral("CodeMode"));
        CodeMode->setGeometry(QRect(300, 140, 91, 19));

        retranslateUi(Dialog);
        QObject::connect(okButton, SIGNAL(clicked()), Dialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), Dialog, SLOT(reject()));
        QObject::connect(CodeMode, SIGNAL(clicked()), Dialog, SLOT(changeModeCode()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Log in", Q_NULLPTR));
        okButton->setText(QApplication::translate("Dialog", "Log in", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("Dialog", "Cancel", Q_NULLPTR));
        label_account->setText(QString());
        label_password->setText(QString());
        label_info->setText(QString());
        CodeMode->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
