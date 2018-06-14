/********************************************************************************
** Form generated from reading UI file 'Student.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_H
#define UI_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormS
{
public:
    QTabWidget *tabStudent;
    QWidget *tab;
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QWidget *tab_3;
    QTableWidget *tableWidget_2;
    QPushButton *pushButton_2;
    QWidget *tab_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_5;
    QTableWidget *tableWidget_3;
    QWidget *tab_6;
    QTableWidget *tableWidget_4;
    QWidget *tab_7;
    QTableWidget *tableWidget_7;
    QWidget *widget;
    QTabWidget *tabWidget_3;
    QWidget *tab_8;
    QTableWidget *tableWidget_5;
    QWidget *tab_9;
    QTableWidget *tableWidget_6;

    void setupUi(QWidget *FormS)
    {
        if (FormS->objectName().isEmpty())
            FormS->setObjectName(QStringLiteral("FormS"));
        FormS->resize(1076, 542);
        tabStudent = new QTabWidget(FormS);
        tabStudent->setObjectName(QStringLiteral("tabStudent"));
        tabStudent->setGeometry(QRect(10, 10, 1031, 521));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget = new QTabWidget(tab);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 1010, 480));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tableWidget = new QTableWidget(tab_4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 980, 380));
        pushButton = new QPushButton(tab_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(860, 400, 90, 40));
        QFont font;
        font.setPointSize(15);
        pushButton->setFont(font);
        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tableWidget_2 = new QTableWidget(tab_3);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(10, 10, 980, 380));
        pushButton_2 = new QPushButton(tab_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(860, 400, 90, 40));
        pushButton_2->setFont(font);
        tabWidget->addTab(tab_3, QString());
        tabStudent->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_2 = new QTabWidget(tab_2);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 10, 1010, 480));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tableWidget_3 = new QTableWidget(tab_5);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(10, 10, 980, 380));
        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tableWidget_4 = new QTableWidget(tab_6);
        tableWidget_4->setObjectName(QStringLiteral("tableWidget_4"));
        tableWidget_4->setGeometry(QRect(10, 10, 980, 380));
        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        tableWidget_7 = new QTableWidget(tab_7);
        tableWidget_7->setObjectName(QStringLiteral("tableWidget_7"));
        tableWidget_7->setGeometry(QRect(10, 10, 980, 380));
        tabWidget_2->addTab(tab_7, QString());
        tabStudent->addTab(tab_2, QString());
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        tabWidget_3 = new QTabWidget(widget);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(10, 10, 1010, 480));
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        tableWidget_5 = new QTableWidget(tab_8);
        tableWidget_5->setObjectName(QStringLiteral("tableWidget_5"));
        tableWidget_5->setGeometry(QRect(10, 10, 980, 380));
        tabWidget_3->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        tableWidget_6 = new QTableWidget(tab_9);
        tableWidget_6->setObjectName(QStringLiteral("tableWidget_6"));
        tableWidget_6->setGeometry(QRect(10, 10, 980, 380));
        tabWidget_3->addTab(tab_9, QString());
        tabStudent->addTab(widget, QString());

        retranslateUi(FormS);

        tabStudent->setCurrentIndex(2);
        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(2);
        tabWidget_3->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(FormS);
    } // setupUi

    void retranslateUi(QWidget *FormS)
    {
        FormS->setWindowTitle(QApplication::translate("FormS", "Student", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FormS", "\346\217\220\344\272\244", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("FormS", "\345\276\205\351\200\211\350\257\276\347\250\213", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("FormS", "\345\210\240\351\231\244", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("FormS", "\345\267\262\351\200\211\350\257\276\347\250\213", Q_NULLPTR));
        tabStudent->setTabText(tabStudent->indexOf(tab), QApplication::translate("FormS", "\345\255\246\347\224\237\351\200\211\350\257\276", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("FormS", "\346\234\254\345\255\246\346\234\237\345\255\246\345\210\206", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("FormS", "\346\211\200\346\234\211\345\255\246\345\210\206", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("FormS", "\345\267\262\344\277\256\345\255\246\345\210\206", Q_NULLPTR));
        tabStudent->setTabText(tabStudent->indexOf(tab_2), QApplication::translate("FormS", "\345\255\246\345\210\206\346\237\245\350\257\242", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_8), QApplication::translate("FormS", "\346\234\254\345\255\246\346\234\237\346\210\220\347\273\251", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_9), QApplication::translate("FormS", "\346\211\200\346\234\211\346\210\220\347\273\251", Q_NULLPTR));
        tabStudent->setTabText(tabStudent->indexOf(widget), QApplication::translate("FormS", "\346\210\220\347\273\251\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FormS: public Ui_FormS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H
