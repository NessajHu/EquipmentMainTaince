#include "mainwindow.h"
#include <QApplication>
#include "login.h"
#include <QDebug>
#include "equipmentmaintainceplansearch.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	qDebug() <<"here1";
	EquipmentMaintaincePlanSearch ww;
	ww.show();
	MainWindow w;
	qDebug() <<"here";
	//Login w;
    w.show();

    return a.exec();
}
