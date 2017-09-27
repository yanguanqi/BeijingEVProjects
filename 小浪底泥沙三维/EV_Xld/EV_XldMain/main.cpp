#include "ev_xldmain.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	EV_XldMain w;
	w.show();
	return a.exec();
}
