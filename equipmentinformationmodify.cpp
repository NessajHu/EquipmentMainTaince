#include "equipmentinformationmodify.h"

EquipmentInformationModify::EquipmentInformationModify(QWidget *parent) : QWidget(parent)
{
	setMinimumSize(500, 400);
	layout->addWidget(backButton, 0, 0, 0, 1, Qt::AlignLeft | Qt::AlignTop);
	layout->addWidget(nameWidget, 1, 0, 1, 1);
	layout->addWidget(idWidget, 1, 1, 1, 1);
	layout->addWidget(equipmentTtypeWidget, 1, 2, 1, 1);
	layout->addWidget(manufacturerWidget, 2, 0, 1, 1);
	layout->addWidget(pictureWidget, 2, 1, 1, 1);
	layout->addWidget(priceWidget, 2, 2, 1, 1);
	layout->addWidget(powerWidget, 3, 0, 1, 1);
	layout->addWidget(usageStateWidget, 3, 1, 1, 1);
	layout->addWidget(locationWidget, 3, 2, 1, 1);
	layout->addWidget(serviceLifeWidget, 4, 0, 1, 1);
	layout->addWidget(purchaseDateWidget, 4, 1, 1, 1);
}
