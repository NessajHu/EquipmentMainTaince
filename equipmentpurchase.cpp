#include "equipmentpurchase.h"

#include <QIcon>
#include <QHeaderView>

EquipmentPurchase::EquipmentPurchase(QWidget *parent)
	: QWidget(parent)
{
	QStringList labels;
	labels << "Name" << "ID" << "Equipment Type" << "Manufacturer"
		   << "Picture" << "Price" << "Power" << "Usage State"
		   << "Location" << "Serivce Life" << "Purchase Date";
	searchWidget->setLabels(labels);
	searchWidget->getModel()->setTable(QString("purchase"));
	layout->addWidget(searchWidget, 0, 0, 5, 5);
	layout->addWidget(addButton, 5, 0, 1, 1);
	layout->addWidget(deleteButton, 5, 2, 1, 1);
	layout->addWidget(buyButton, 5, 4, 1, 1);
	QObject::connect(addButton, &QPushButton::clicked, [this](){this->addWidget->show();});
	QObject::connect(addWidget, &AddEquipmentInformation::backButtonClicked, [this](){this->addWidget->hide();});
}

