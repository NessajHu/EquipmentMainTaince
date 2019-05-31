#ifndef EQUIPMENTPURCHASE_H
#define EQUIPMENTPURCHASE_H

#include <QWidget>
#include <searchwidget.h>
#include <QGridLayout>
#include <QPushButton>
#include "addequipmentinformation.h"

class EquipmentPurchase : public QWidget
{
	Q_OBJECT
public:
	explicit EquipmentPurchase(QWidget *parent = nullptr);
	SearchWidget *searchWidget = new SearchWidget(this);
	QPushButton *addButton = new QPushButton(QString("Add"), this);
	QPushButton *deleteButton = new QPushButton(QString("Delete"), this);
	QPushButton *buyButton = new QPushButton(QString("Buy"), this);
	AddEquipmentInformation *addWidget = new AddEquipmentInformation(this);
	QGridLayout *layout = new QGridLayout(this);
signals:

public slots:
};

#endif // EQUIPMENTPURCHASE_H
