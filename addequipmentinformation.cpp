#include "addequipmentinformation.h"

AddEquipmentInformation::AddEquipmentInformation(QWidget *parent) : QWidget(parent)
{
	hide();
	setWindowFlags(Qt::Dialog);
	setWindowModality(Qt::WindowModal);
	modify->nameWidget->setButtonVisible(false);
	modify->idWidget->setButtonVisible(false);
	modify->equipmentTtypeWidget->setButtonVisible(false);
	modify->manufacturerWidget->setButtonVisible(false);
	modify->pictureWidget->setButtonVisible(true);
	modify->priceWidget->setButtonVisible(false);
	modify->powerWidget->setButtonVisible(false);
	modify->usageStateWidget->setButtonVisible(false);
	modify->locationWidget->setButtonVisible(false);
	modify->serviceLifeWidget->setButtonVisible(false);
	modify->purchaseDateWidget->setButtonVisible(false);
	layout->addWidget(modify, 0, 0, 5, 5);
	layout->addWidget(addButton, 5, 2, 1, 1);
	QObject::connect(modify->backButton, &QPushButton::clicked, [this](){emit this->backButtonClicked();});
}
