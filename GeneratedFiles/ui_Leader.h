/********************************************************************************
** Form generated from reading UI file 'Leader.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEADER_H
#define UI_LEADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormL
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *tab_4;

    void setupUi(QWidget *FormL)
    {
        if (FormL->objectName().isEmpty())
            FormL->setObjectName(QStringLiteral("FormL"));
        FormL->resize(1081, 587);
        tabWidget = new QTabWidget(FormL);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 1011, 551));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());

        retranslateUi(FormL);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(FormL);
    } // setupUi

    void retranslateUi(QWidget *FormL)
    {
        FormL->setWindowTitle(QApplication::translate("FormL", "Leader", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("FormL", "\346\213\233\347\224\237\346\203\205\345\206\265", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("FormL", "\345\274\200\350\257\276\347\273\237\350\256\241", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("FormL", "\346\225\231\345\270\210\346\203\205\345\206\265", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("FormL", "\345\255\246\347\224\237\346\203\205\345\206\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FormL: public Ui_FormL {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEADER_H
