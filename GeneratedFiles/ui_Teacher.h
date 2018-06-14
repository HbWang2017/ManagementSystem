/********************************************************************************
** Form generated from reading UI file 'Teacher.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHER_H
#define UI_TEACHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormT
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;

    void setupUi(QWidget *FormT)
    {
        if (FormT->objectName().isEmpty())
            FormT->setObjectName(QStringLiteral("FormT"));
        FormT->resize(1069, 693);
        tabWidget = new QTabWidget(FormT);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 30, 1021, 611));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(FormT);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(FormT);
    } // setupUi

    void retranslateUi(QWidget *FormT)
    {
        FormT->setWindowTitle(QApplication::translate("FormT", "Teacher", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("FormT", "\345\255\246\347\224\237", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("FormT", "\350\257\276\347\250\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FormT: public Ui_FormT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHER_H
