#include "equipmentmaintainceplansearch.h"

EquipmentMaintaincePlanSearch::EquipmentMaintaincePlanSearch(QWidget *parent) : QWidget(parent)
{
	searchTable->setPlaceholderText("ID");
	layout->addWidget(searchTable, 0, 0, 5, 5);
	layout->addWidget(addButton, 5, 0, 1, 1);
	layout->addWidget(deleteButton, 5, 2, 1, 1);
	layout->addWidget(modifyButton, 5, 4, 1, 1);
	layout->setColumnStretch(0, 1);
	layout->setColumnStretch(1, 1);
	layout->setColumnStretch(2, 1);
	layout->setColumnStretch(3, 1);
	layout->setColumnStretch(4, 1);
	layout->setColumnStretch(5, 0);
	QObject::connect(searchTable, &SearchWidget::itemDoubleClicked, [this](QTableWidgetItem *item){emit itemDoubleClicked(item);});
}
