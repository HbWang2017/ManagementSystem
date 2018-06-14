#include "IDcheck.h"
#include "Student.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	IDcheck id;
	id.show();
	return a.exec();

}
