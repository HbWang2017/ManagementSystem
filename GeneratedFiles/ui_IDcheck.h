/********************************************************************************
** Form generated from reading UI file 'IDcheck.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDCHECK_H
#define UI_IDCHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormI
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QPushButton *pushButton_4;

    void setupUi(QWidget *FormI)
    {
        if (FormI->objectName().isEmpty())
            FormI->setObjectName(QStringLiteral("FormI"));
        FormI->resize(310, 423);
        pushButton = new QPushButton(FormI);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 70, 111, 51));
        QFont font;
        font.setPointSize(15);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(FormI);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 160, 111, 51));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(FormI);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(100, 250, 111, 51));
        pushButton_3->setFont(font);
        label = new QLabel(FormI);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 271, 31));
        label->setFont(font);
        pushButton_4 = new QPushButton(FormI);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(100, 340, 111, 51));
        pushButton_4->setFont(font);

        retranslateUi(FormI);
        QObject::connect(pushButton, SIGNAL(clicked()), FormI, SLOT(student_clicked()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), FormI, SLOT(manager_clicked()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), FormI, SLOT(teacher_clicked()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), FormI, SLOT(leader_clicked()));

        QMetaObject::connectSlotsByName(FormI);
    } // setupUi

    void retranslateUi(QWidget *FormI)
    {
        FormI->setWindowTitle(QApplication::translate("FormI", "IDcheck", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FormI", "Student", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("FormI", "Teacher", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("FormI", "Manager", Q_NULLPTR));
        label->setText(QApplication::translate("FormI", "Choose your identity", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("FormI", "Leader", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FormI: public Ui_FormI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDCHECK_H
