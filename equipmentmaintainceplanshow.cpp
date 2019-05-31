#include "equipmentmaintainceplanshow.h"
#include <QSqlRecord>

EquipmentMaintaincePlanShow::EquipmentMaintaincePlanShow(QWidget *parent) : QStackedWidget(parent)
{
	addWidget(searchWidget);
	addWidget(modifyWidget);
	setCurrentWidget(searchWidget);
	QObject::connect(searchWidget, &EquipmentMaintaincePlanSearch::itemDoubleClicked, [this](QSqlRecord item){setModifyWidget(item);});
	QObject::connect(modifyWidget, &EquipmentMaintaincePlanModify::backButtonClicked, [this](){setSearchWidget(false);});
	QObject::connect(modifyWidget, &EquipmentMaintaincePlanModify::backButtonClicked, [this](){setSearchWidget(true);});
}

void EquipmentMaintaincePlanShow::setSearchWidget([[maybe_unused]]bool save)
{
	setCurrentWidget(searchWidget);
}

void EquipmentMaintaincePlanShow::setModifyWidget([[maybe_unused]]QSqlRecord item)
{
	setCurrentWidget(modifyWidget);
}
