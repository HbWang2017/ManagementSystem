#include "LoginS.h"
LoginS::LoginS(QWidget *parent)
	:QDialog(parent),ui(new Ui::Dialog)
{
	ui->setupUi(this);
	ui->label_account->setText(tr("Account"));
	ui->label_password->setText(tr("Password"));
	ui->textPassword->setEchoMode(QLineEdit::Password);
	mode = true;
}
LoginS::~LoginS()
{
	delete ui;
}
QString LoginS::account()
{
	return ui->textAccount->text();
}
QString LoginS::password()
{
	return ui->textPassword->text();
}
void LoginS::setInfo(QString info)
{
	ui->label_info->setText(info);
}
void LoginS::clearTextPassword()
{
	ui->textPassword->clear();
}
void LoginS::changeModeCode()
{
	if (mode == true)
	{
		mode = false;
		ui->textPassword->setEchoMode(QLineEdit::Normal);
	}	
	else
	{
		mode = true;
		ui->textPassword->setEchoMode(QLineEdit::Password);
	}
		
}
void LoginS::setInfoColor(QPalette qp)
{
	ui->label_info->setPalette(qp);
}