#pragma once
#ifndef IDCHECK_H
#define IDCHECK_H
#include "ui_IDcheck.h"
#include "LoginS.h"
#include "Student.h"
#include "Teacher.h"
#include "Leader.h"
#include "Manager.h"
class IDcheck : public QWidget
{
	Q_OBJECT
public:
	IDcheck(QWidget *parent = Q_NULLPTR);
private:
	Ui::FormI ui;
private slots:
	void student_clicked();
	void teacher_clicked();
	void manager_clicked();
	void leader_clicked();
};
#endif // !IDCHECK_H
