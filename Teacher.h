#pragma once
#ifndef TEACHER_H
#define TEACHER_H
#include "ui_Teacher.h"
class Teacher :public QWidget
{
public:
	Teacher(QWidget *parent =Q_NULLPTR);
	~Teacher() {}

private:
	Ui::FormT ui;
};

#endif // !TEACHER_H


