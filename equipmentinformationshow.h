#ifndef EQUIPMENTINFORMATIONSHOW_H
#define EQUIPMENTINFORMATIONSHOW_H

#include <QStackedWidget>
#include <searchwidget.h>
#include "equipmentinformationmodify.h"
#include "equipmentinformationwidget.h"
#include "addequipmentinformation.h"

class EquipmentInformationShow : public QStackedWidget
{
	Q_OBJECT
public:
	explicit EquipmentInformationShow(QWidget *parent = nullptr);
	EquipmentInformationWidget *searchWidget = new EquipmentInformationWidget(this);
	EquipmentInformationModify *equipmentInformationModify = new EquipmentInformationModify(this);
	AddEquipmentInformation *addEquipmentInformation = new AddEquipmentInformation(this);
signals:

public slots:
};

#endif // EQUIPMENTINFORMATIONSHOW_H
