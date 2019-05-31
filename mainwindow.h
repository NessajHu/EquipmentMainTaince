#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "tabwidget.h"
#include "personalinformation.h"
#include <QGridLayout>
#include "departmentshow.h"
#include "departmentinformationmodify.h"
#include "departmentinformation.h"
#include "equipmentpurchase.h"
#include "equipmentmaintainceplanshow.h"
#include "equipmentinformationshow.h"
#include "todayplan.h"
#include "tcpserver.h"

class MainWindow : public QWidget
{
    Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
	void initDataBase();
	static const QTabWidget::TabPosition westTabPosition = QTabWidget::West;
	static const QTabWidget::TabPosition northTabPosition = QTabWidget::North;
	TabWidget<westTabPosition> *tabWidget;
	TabWidget<northTabPosition> *basicInformation;
	TabWidget<northTabPosition> *equipmentInformation;
	TabWidget<northTabPosition> *equipmentMaintaince;
	PersonalInformation *personInformation;
	DepartmentInformation *departmentInformation;
	EquipmentPurchase *equipmentPurchse;
	EquipmentMaintaincePlanShow *equipmentMaintaincePlanShow;
	EquipmentInformationShow *equipmentInformationShow;
	TodayPlan *todayPlan;
	QGridLayout *layout;
	TcpServer *server;
};

#endif // MAINWINDOW_H
