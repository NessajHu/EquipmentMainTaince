#include "equipmentinformationshow.h"


EquipmentInformationShow::EquipmentInformationShow(QWidget *parent) : QStackedWidget(parent)
{
	addWidget(searchWidget);
	addWidget(equipmentInformationModify);
}
