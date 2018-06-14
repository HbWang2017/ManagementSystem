#pragma once
#ifndef LEADER_H
#define LEADER_H
#include "ui_Leader.h"
class Leader : public QWidget
{
public:
	Leader(QWidget *parent = Q_NULLPTR);
private:
	Ui::FormL ui;
};
#endif // !LEADER_H
