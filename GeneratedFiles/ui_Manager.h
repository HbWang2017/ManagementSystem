/********************************************************************************
** Form generated from reading UI file 'Manager.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormM
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *Tab_3;
    QWidget *tab_4;
    QWidget *tab_5;

    void setupUi(QWidget *FormM)
    {
        if (FormM->objectName().isEmpty())
            FormM->setObjectName(QStringLiteral("FormM"));
        FormM->resize(1085, 651);
        tabWidget = new QTabWidget(FormM);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 10, 1031, 631));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        Tab_3 = new QWidget();
        Tab_3->setObjectName(QStringLiteral("Tab_3"));
        tabWidget->addTab(Tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget->addTab(tab_5, QString());

        retranslateUi(FormM);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(FormM);
    } // setupUi

    void retranslateUi(QWidget *FormM)
    {
        FormM->setWindowTitle(QApplication::translate("FormM", "Manager", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("FormM", "\345\255\246\347\224\237\351\200\211\350\257\276", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("FormM", "\345\274\200\350\257\276\347\256\241\347\220\206", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Tab_3), QApplication::translate("FormM", "\345\255\246\347\261\215\347\256\241\347\220\206", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("FormM", "\346\210\220\347\273\251\347\256\241\347\220\206", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("FormM", "\350\200\203\345\212\241\347\256\241\347\220\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FormM: public Ui_FormM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_H
