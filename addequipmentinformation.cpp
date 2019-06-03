#include "addequipmentinformation.h"
#include "equipmentinformation.h"

AddEquipmentInformation::AddEquipmentInformation(QWidget *parent) : QWidget(parent)
{
	hide();
	setWindowFlags(Qt::Dialog);
	setWindowModality(Qt::WindowModal);
	modify->nameWidget->setButtonVisible(false);
	modify->idWidget->setButtonVisible(false);
	modify->equipmentTypeWidget->setButtonVisible(false);
	modify->manufacturerWidget->setButtonVisible(false);
	modify->pictureWidget->setButtonVisible(true);
	modify->priceWidget->setButtonVisible(false);
	modify->powerWidget->setButtonVisible(false);
	modify->usageStateWidget->setButtonVisible(false);
	modify->locationWidget->setButtonVisible(false);
	modify->serviceLifeWidget->setButtonVisible(false);
	modify->purchaseDateWidget->setButtonVisible(false);
	modify->personWidget->setButtonVisible(false);
	layout->addWidget(modify, 0, 0, 5, 5);
	layout->addWidget(addButton, 5, 2, 1, 1);
	QObject::connect(modify->backButton, &QPushButton::clicked, [this](){emit this->backButtonClicked();});
	QObject::connect(addButton, &QPushButton::clicked, [this](){
		model->insertRows(0, 1);
		model->setData(model->index(0, 0), modify->idWidget->getData().toInt());
		model->setData(model->index(0, 1), modify->nameWidget->getData());
		model->setData(model->index(0, 2), EquipmentInformation::stringToType(modify->equipmentTypeWidget->getData()));
		model->setData(model->index(0, 3), modify->pictureWidget->getData());
		model->setData(model->index(0, 4), modify->priceWidget->getData().toInt());
		model->setData(model->index(0, 5), modify->powerWidget->getData().toInt());
		model->setData(model->index(0, 6), EquipmentInformation::stringToState(modify->usageStateWidget->getData()));
		model->setData(model->index(0, 7), modify->locationWidget->getData());
		model->setData(model->index(0, 8), modify->serviceLifeWidget->getData().toInt());
		model->setData(model->index(0, 9), modify->purchaseDateWidget->getData());
		model->setData(model->index(0, 10), modify->personWidget->getData().toInt());
		model->setData(model->index(0, 11), modify->manufacturerWidget->getData());
		modify->nameWidget->clear();
		modify->idWidget->clear();
		modify->equipmentTypeWidget->clear();
		modify->manufacturerWidget->clear();
		modify->pictureWidget->clear();
		modify->priceWidget->clear();
		modify->powerWidget->clear();
		modify->usageStateWidget->clear();
		modify->locationWidget->clear();
		modify->serviceLifeWidget->clear();
		modify->purchaseDateWidget->clear();
		modify->personWidget->clear();
		model->submitAll();
		model->select();
		emit this->newRecord(QSqlRecord());
	});
}
