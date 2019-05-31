#ifndef DEPARTMENTSHOW_H
#define DEPARTMENTSHOW_H

#include <QWidget>
#include <QTreeWidget>
#include <QGridLayout>
#include <QPushButton>
#include "addequipmentinformation.h"

class DepartmentShow : public QWidget
{
	Q_OBJECT
public:
	explicit DepartmentShow(QWidget *parent = nullptr);
private:
	QTreeWidget *departmentListInformation = new QTreeWidget(this);
	QPushButton *addButton = new QPushButton(this);
	QPushButton *deleteButton = new QPushButton(this);
	AddEquipmentInformation *addWidget = new AddEquipmentInformation(this);
	QGridLayout *layout = new QGridLayout(this);
signals:
	void itemDoubleClicked(QTreeWidgetItem *item);
public slots:
};

#endif // DEPARTMENTSHOW_H
