#ifndef ADDEQUIPMENTMAINTAINCEPLAN_H
#define ADDEQUIPMENTMAINTAINCEPLAN_H

#include <QWidget>
#include <searchwidget.h>
#include <equipmentmaintainceplanmodify.h>
#include <QGridLayout>

class AddEquipmentMaintaincePlan : public QWidget
{
	Q_OBJECT
public:
	explicit AddEquipmentMaintaincePlan(QWidget *parent = nullptr);
	EquipmentMaintaincePlanModify *modify = new EquipmentMaintaincePlanModify(this);
	QPushButton *addButton = new QPushButton(QString("Add"), this);
	QGridLayout *layout = new QGridLayout(this);
signals:

public slots:
};

#endif // ADDEQUIPMENTMAINTAINCEPLAN_H
