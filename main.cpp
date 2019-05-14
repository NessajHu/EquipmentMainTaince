#include "mainwindow.h"
#include <QApplication>
#include "login.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	qDebug() <<"here1";
	MainWindow w;
	qDebug() <<"here";
	//Login w;
    w.show();

    return a.exec();
}
