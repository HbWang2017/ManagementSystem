#pragma once
#ifndef LOGINS_H
#define LOGINS_H
#include <QtWidgets/qdialog.h>
#include "ui_Login.h"
#include <qstring.h>
#include <qpalette.h>
class LoginS : public QDialog
{
	Q_OBJECT
private:
	Ui::Dialog *ui;
	bool mode;
public:
	LoginS(QWidget *parent = Q_NULLPTR);
	~LoginS();
	QString account();
	QString password();
	void LoginS::setInfo(QString);
	void LoginS::clearTextPassword();
	void LoginS::setInfoColor(QPalette qp);
private slots:
	void changeModeCode();
};
#endif // !LOGINS_H
