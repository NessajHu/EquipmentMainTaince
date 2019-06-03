#include "equipmentinformationshow.h"


EquipmentInformationShow::EquipmentInformationShow(QWidget *parent) : QStackedWidget(parent)
{
	addEquipmentInformation->hide();
	addWidget(searchWidget);
	addWidget(equipmentInformationModify);

}
