#include "mainwindow.h"
#include <QPushButton>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
	: QWidget(parent)
{
	qDebug() <<"here";
	setMinimumSize(800, 800);
	tabWidget->setUsesScrollButtons(false);
	tabWidget->addTab(basicInformation, "Basic Information");
	tabWidget->addTab(equipmentInformation, "Equipment Information");
	tabWidget->addTab(equipmentMainTaince, "Equipment MainTaince");
	basicInformation->addTab(personInformation, "Personal Information");
	basicInformation->addTab(departmentInformation, "Department Information");
	layout->addWidget(tabWidget);
	layout->setMargin(0);
}

MainWindow::~MainWindow()
{

}
