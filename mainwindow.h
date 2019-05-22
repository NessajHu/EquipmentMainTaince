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
#include "todayplan.h"

class MainWindow : public QWidget
{
    Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
	static const QTabWidget::TabPosition westTabPosition = QTabWidget::West;
	static const QTabWidget::TabPosition northTabPosition = QTabWidget::North;
	TabWidget<westTabPosition> *tabWidget = new TabWidget<westTabPosition>(this);
	TabWidget<northTabPosition> *basicInformation = new TabWidget<northTabPosition>(this);
	TabWidget<northTabPosition> *equipmentInformation = new TabWidget<northTabPosition>(this);
	TabWidget<northTabPosition> *equipmentMaintaince = new TabWidget<northTabPosition>(this);
	PersonalInformation *personInformation = new PersonalInformation(basicInformation);
	DepartmentInformation *departmentInformation = new DepartmentInformation(basicInformation);
	EquipmentPurchase *equipmentPurchse = new EquipmentPurchase(this);
	EquipmentMaintaincePlanShow *equipmentMaintaincePlanShow = new EquipmentMaintaincePlanShow(this);
	TodayPlan *todayPlan = new TodayPlan(this);
	QGridLayout *layout = new QGridLayout(this);
};

#endif // MAINWINDOW_H
