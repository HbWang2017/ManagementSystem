#pragma once
#ifndef MANAGER_H
#define MANAGER_H
#include "ui_Manager.h"
class Manager : public QWidget
{
public:
	Manager(QWidget *parent = Q_NULLPTR);
private:
	Ui::FormM ui;
};
#endif // !MANAGER_H
