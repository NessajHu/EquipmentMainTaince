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
	tabWidget->addTab(equipmentMaintaince, "Equipment Maintaince");
	basicInformation->addTab(personInformation, "Personal Information");
	basicInformation->addTab(departmentInformation, "Department Information");
	equipmentInformation->addTab(equipmentPurchse, "Equipment Purchase");
	equipmentInformation->addTab(equipmentMaintaincePlanShow, "Equipment Maintaince Plan Show");
	equipmentInformation->addTab(todayPlan, "Today Plan");
	layout->addWidget(tabWidget);
	layout->setMargin(0);
}

MainWindow::~MainWindow()
{

}
