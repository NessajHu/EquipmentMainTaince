#include "equipmentscrapping.h"

EquipmentScrapping::EquipmentScrapping(QWidget *parent) : QWidget(parent)
{
	searchWidget->getModel()->setTable(QString("scrap"));
	layout->addWidget(searchWidget, 0, 0, 5, 5);
	layout->addWidget(deleteButton, 5, 2, 1, 1);
	QObject::connect(deleteButton, &QPushButton::clicked, [this](){
		if(searchWidget->getView()->selectionModel()->currentIndex() != QModelIndex())
		{
			searchWidget->getModel()->removeRow(searchWidget->getView()->selectionModel()->currentIndex().row());
			searchWidget->getModel()->select();
		}
	});
}
