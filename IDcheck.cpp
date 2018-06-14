#include "IDcheck.h"
#include <qpalette.h>
//引入账号密码验证
Student *st;
Teacher *te;
Leader *le;
Manager *ma;

IDcheck::IDcheck(QWidget *parent)
	:QWidget(parent)
{
	ui.setupUi(this);
}
void IDcheck::student_clicked()
{
	LoginS login(this);
	login.show();
	bool idcheck = false;
	int check;
	while (!idcheck)
	{
		check= login.exec();
		if (check == QDialog::Accepted  && login.account() == tr("mint") && login.password() == tr("123456"))//密码验证
		{
			st = new Student;
			st->show();
			idcheck = true;
			destroy();
		}
		else if (check == QDialog::Rejected)
			idcheck = true;
		else
		{
			QPalette qp;
			qp.setColor(QPalette::WindowText, Qt::red);
			login.setInfoColor(qp);
			login.setInfo(tr("Wrong Password! Try again!"));
			login.clearTextPassword();
		}
		
	}
}
void IDcheck::teacher_clicked()
{
	LoginS login(this);
	login.show();
	bool idcheck = false;
	int check;
	while (!idcheck)
	{
		check = login.exec();
		if (check == QDialog::Accepted  && login.account() == tr("mint") && login.password() == tr("123456"))//密码验证
		{
			te = new Teacher;
			te->show();
			idcheck = true;
			destroy();
		}
		else if (check == QDialog::Rejected)
			idcheck = true;
		else
		{
			QPalette qp;
			qp.setColor(QPalette::WindowText, Qt::red);
			login.setInfoColor(qp);
			login.setInfo(tr("Wrong Password! Try again!"));
			login.clearTextPassword();
		}
	}
}
void IDcheck::leader_clicked()
{
	LoginS login(this);
	login.show();
	bool idcheck = false;
	int check;
	while (!idcheck)
	{
		check = login.exec();
		if (check == QDialog::Accepted  && login.account() == tr("mint") && login.password() == tr("123456"))//密码验证
		{
			le = new Leader;
			le->show();
			idcheck = true;
			destroy();
		}
		else if (check == QDialog::Rejected)
			idcheck = true;
		else
		{
			QPalette qp;
			qp.setColor(QPalette::WindowText, Qt::red);
			login.setInfoColor(qp);
			login.setInfo(tr("Wrong Password! Try again!"));
			login.clearTextPassword();
		}
	}
}
void IDcheck::manager_clicked()
{
	LoginS login(this);
	login.show();
	bool idcheck = false;
	int check;
	while (!idcheck)
	{
		check = login.exec();
		if (check == QDialog::Accepted  && login.account() == tr("mint") && login.password() == tr("123456"))//密码验证
		{
			ma = new Manager;
			ma->show();
			idcheck = true;
			destroy();
		}
		else if (check == QDialog::Rejected)
			idcheck = true;
		else
		{
			QPalette qp;
			qp.setColor(QPalette::WindowText, Qt::red);
			login.setInfoColor(qp);
			login.setInfo(tr("Wrong Password! Try again!"));
			login.clearTextPassword();
		}
	}
}

#pragma once

