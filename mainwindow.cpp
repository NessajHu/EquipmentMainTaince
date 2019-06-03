#include "mainwindow.h"
#include <QPushButton>
#include <QDebug>
#include <QSqlDatabase>
MainWindow::MainWindow(QWidget *parent)
	: QWidget(parent)
{
	initDataBase();
	tabWidget = new TabWidget<westTabPosition>(this);
	basicInformation = new TabWidget<northTabPosition>(this);
	equipmentInformation = new TabWidget<northTabPosition>(this);
	equipmentMaintaince = new TabWidget<northTabPosition>(this);
	personInformation = new PersonalInformation(basicInformation);
	departmentInformation = new DepartmentInformation(basicInformation);
	equipmentPurchse = new EquipmentPurchase(this);
	equipmentMaintaincePlanShow = new EquipmentMaintaincePlanShow(this);
	equipmentScrapping = new EquipmentScrapping(this);
	equipmentInformationShow = new EquipmentInformationShow(this);
	todayPlan = new TodayPlan(this);
	layout = new QGridLayout(this);
	server = new TcpServer(this);
	qDebug() <<"here";
	setMinimumSize(800, 800);
	tabWidget->setUsesScrollButtons(false);
	tabWidget->addTab(basicInformation, "Basic Information");
	tabWidget->addTab(equipmentInformation, "Equipment Information");
	tabWidget->addTab(equipmentMaintaince, "Equipment Maintaince");
	basicInformation->addTab(personInformation, "Personal Information");
	basicInformation->addTab(departmentInformation, "Department Information");
	equipmentInformation->addTab(equipmentPurchse, "Equipment Purchase");
	equipmentInformation->addTab(equipmentInformationShow, "Equipment Information");
	equipmentInformation->addTab(equipmentScrapping, "Equipment Scrapping");
	equipmentMaintaince->addTab(equipmentMaintaincePlanShow, "Equipment Maintaince Plan Show");
	equipmentMaintaince->addTab(todayPlan, "Today Plan");
	layout->addWidget(tabWidget);
	layout->setMargin(0);
}

MainWindow::~MainWindow()
{

}

void MainWindow::initDataBase()
{
	QSqlDatabase data_base = QSqlDatabase::addDatabase("QMYSQL");
	data_base.setHostName("121.199.42.114");
	data_base.setPort(3306);
	data_base.setDatabaseName("data");
	data_base.setUserName("root");
	data_base.setPassword("root");
	if(!data_base.open())
		qDebug()<<"failed to connect to mysql";
	else
		qDebug()<<"success";
}
