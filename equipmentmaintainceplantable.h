#ifndef EQUIPMENTMAINTAINCEPLANTABLE_H
#define EQUIPMENTMAINTAINCEPLANTABLE_H

#include <QWidget>
#include <QTableWidget>
#include <QPushButton>

class EquipmentMaintaincePlanTable : public QWidget
{
	Q_OBJECT
public:
	explicit EquipmentMaintaincePlanTable(QWidget *parent = nullptr);
	QTableWidget *tableWidget = new QTableWidget(this);
	QPushButton *addButton = new QPushButton(this);
	QPushButton *modifyButton = new QPushButton(this);
	QPushButton *deleteButton = new QPushButton(this);
signals:

public slots:
};

#endif // EQUIPMENTMAINTAINCEPLANTABLE_H
