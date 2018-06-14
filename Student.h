#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include "ui_Student.h"
#include <QtWidgets/qwidget.h>
class Student : public QWidget
{
	Q_OBJECT
public:
	Student(QWidget *parent = Q_NULLPTR);
private:
	Ui::FormS ui;
};
#endif // !STUDENT_H

