#include "equipmentinformationwidget.h"

EquipmentInformationWidget::EquipmentInformationWidget(QWidget *parent) : QWidget(parent)
{
	QStringList labels;
	labels << "Name" << "ID" << "Equipment Type" << "Manufacturer"
		   << "Picture" << "Price" << "Power" << "Usage State"
		   << "Location" << "Serivce Life" << "Purchase Date";
	searchWidget->setLabels(labels);
	searchWidget->getModel()->setTable(QString("equipment"));
	layout->addWidget(searchWidget, 0, 0, 5, 5);
	layout->addWidget(deleteButton, 5, 2, 1, 1);
}
