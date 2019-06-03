#include "equipmentmaintainceplansearch.h"
#include <QSqlRecord>

EquipmentMaintaincePlanSearch::EquipmentMaintaincePlanSearch(QWidget *parent) : QWidget(parent)
{
	QStringList labels;
	labels << "Begin Date" << "End Date" << "Maintaince Type"
		   << "Years" << "Months" << "Days" << "Error Years"
		   << "Error Months" << "Error Days";
	searchWidget->setLabels(labels);
	searchWidget->setPlaceholderText("ID");
	searchWidget->getModel()->setTable(QString("plan"));
	searchWidget->getModel()->select();
	layout->addWidget(searchWidget, 0, 0, 5, 5);
	layout->addWidget(addButton, 5, 0, 1, 1);
	layout->addWidget(deleteButton, 5, 2, 1, 1);
	layout->addWidget(modifyButton, 5, 4, 1, 1);
	layout->setColumnStretch(0, 1);
	layout->setColumnStretch(1, 1);
	layout->setColumnStretch(2, 1);
	layout->setColumnStretch(3, 1);
	layout->setColumnStretch(4, 1);
	layout->setColumnStretch(5, 0);
	QObject::connect(searchWidget, &SearchWidget::itemDoubleClicked, [this](QSqlRecord item){emit itemDoubleClicked(item);});
	QObject::connect(addEquipmentInformation, &AddEquipmentInformation::backButtonClicked, [this](){this->addEquipmentInformation->hide();});
	QObject::connect(deleteButton, &QPushButton::clicked, [this](){
		if(searchWidget->getView()->selectionModel()->currentIndex() != QModelIndex())
		{
			searchWidget->getModel()->removeRow(searchWidget->getView()->selectionModel()->currentIndex().row());
			searchWidget->getModel()->select();
		}
	});
}
