#include "mainwindow.h"
#include <QPushButton>
MainWindow::MainWindow(QWidget *parent)
	: QWidget(parent),
	  tabWidget(new TabWidget<westTabPosition>(this)),
	  basicInformation(new TabWidget<northTabPosition>(this)),
	  equipmentInformation(new TabWidget<northTabPosition>(this)),
	  equipmentMainTaince(new TabWidget<northTabPosition>(this))
{
	tabWidget->setGeometry(0, 0, 500, 500);
	tabWidget->addTab(basicInformation, "Basic Information");
	tabWidget->addTab(equipmentInformation, "Equipment Information");
	tabWidget->addTab(equipmentMainTaince, "Equipment MainTaince");
}

MainWindow::~MainWindow()
{

}
