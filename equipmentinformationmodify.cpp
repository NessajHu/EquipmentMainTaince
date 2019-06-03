#include "equipmentinformationmodify.h"

EquipmentInformationModify::EquipmentInformationModify(QWidget *parent) : QWidget(parent)
{
	setMinimumSize(500, 400);
	layout->addWidget(backButton, 0, 0, 0, 1, Qt::AlignLeft | Qt::AlignTop);
	layout->addWidget(nameWidget, 1, 0, 1, 1);
	layout->addWidget(idWidget, 1, 1, 1, 1);
	layout->addWidget(equipmentTypeWidget, 1, 2, 1, 1);
	layout->addWidget(manufacturerWidget, 2, 0, 1, 1);
	layout->addWidget(pictureWidget, 2, 1, 1, 1);
	layout->addWidget(priceWidget, 2, 2, 1, 1);
	layout->addWidget(powerWidget, 3, 0, 1, 1);
	layout->addWidget(usageStateWidget, 3, 1, 1, 1);
	layout->addWidget(locationWidget, 3, 2, 1, 1);
	layout->addWidget(serviceLifeWidget, 4, 0, 1, 1);
	layout->addWidget(purchaseDateWidget, 4, 1, 1, 1);
	layout->addWidget(personWidget, 4, 2, 1, 1);
	QObject::connect(nameWidget, &ShowModifyWidget<QLineEdit, QString>::confirm, [this](QString text){emit this->confirm(text, 1);});
	QObject::connect(idWidget, &ShowModifyWidget<QLineEdit, QString>::confirm, [this](QString text){emit this->confirm(text, 0);});
	QObject::connect(pictureWidget, &ShowModifyWidget<QLineEdit, QString>::confirm, [this](QString text){emit this->confirm(text, 3);});
	QObject::connect(manufacturerWidget, &ShowModifyWidget<QLineEdit, QString>::confirm, [this](QString text){emit this->confirm(text, 11);});
	QObject::connect(priceWidget, &ShowModifyWidget<QLineEdit, QString>::confirm, [this](QString text){emit this->confirm(text, 4);});
	QObject::connect(powerWidget, &ShowModifyWidget<QLineEdit, QString>::confirm, [this](QString text){emit this->confirm(text, 5);});
	QObject::connect(usageStateWidget, &ShowModifyWidget<QComboBox, QString>::confirm, [this](QString text){emit this->confirm(text, 6);});
	QObject::connect(locationWidget, &ShowModifyWidget<QLineEdit, QString>::confirm, [this](QString text){emit this->confirm(text, 7);});
	QObject::connect(equipmentTypeWidget, &ShowModifyWidget<QComboBox, QString>::confirm, [this](QString text){emit this->confirm(text, 2);});
	QObject::connect(serviceLifeWidget, &ShowModifyWidget<QLineEdit, QString>::confirm, [this](QString text){emit this->confirm(text, 8);});
	QObject::connect(purchaseDateWidget, &ShowModifyWidget<QDateEdit, QDate>::confirm, [this](QString text){emit this->confirm(text, 9);});
	QObject::connect(personWidget, &ShowModifyWidget<QLineEdit, QString>::confirm, [this](QString text){emit this->confirm(text, 10);});
}
