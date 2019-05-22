#ifndef EQUIPMENTMAINTAINCEPLANSHOW_H
#define EQUIPMENTMAINTAINCEPLANSHOW_H

#include <QStackedWidget>
#include "equipmentmaintainceplansearch.h"
#include "equipmentmaintainceplanmodify.h"

class EquipmentMaintaincePlanShow : public QStackedWidget
{
public:
	EquipmentMaintaincePlanShow(QWidget *parent);
private:
	void setSearchWidget(bool save);
	void setModifyWidget(QTableWidgetItem *item);
	EquipmentMaintaincePlanSearch *searchWidget = new EquipmentMaintaincePlanSearch(nullptr);
	EquipmentMaintaincePlanModify *modifyWidget = new EquipmentMaintaincePlanModify(nullptr);
};

#endif // EQUIPMENTMAINTAINCEPLANSHOW_H
