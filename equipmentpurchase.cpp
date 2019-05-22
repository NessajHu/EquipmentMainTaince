#include "equipmentpurchase.h"

#include <QIcon>
#include <QHeaderView>

EquipmentPurchase::EquipmentPurchase(QWidget *parent)
	: QWidget(parent)
{
	searchBar->setPlaceholderText("ID");
	searchButton->setText("Search");
	QIcon refreshButtonIcon(QString(":/icon/icon/refresh.png"));
	refreshButton->setIcon(refreshButtonIcon);
	newButton->setText("New");
	modifyButton->setText("Modify");
	deleteButton->setText("Delete");
	buyButton->setText("Buy");
	layout->addWidget(searchBar, 0, 0, 1, 5);
	layout->addWidget(searchButton, 0, 5, 1, 1);
	layout->addWidget(refreshButton, 0, 6, 1, 1);
	layout->addWidget(table, 1, 0, 1, 7);
	layout->addWidget(newButton, 2, 0, 1, 1);
	layout->addWidget(modifyButton, 2, 2, 1, 1);
	layout->addWidget(deleteButton, 2, 4, 1, 1);
	layout->addWidget(buyButton, 2, 6, 1, 1);
	table->setRowCount(10);
	table->setColumnCount(3);
	QStringList tableHeaders;
	tableHeaders << "Model" << "Name" << "Price";
	table->setHorizontalHeaderLabels(tableHeaders);
	table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	table->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	table->setEditTriggers(QAbstractItemView::NoEditTriggers);
}
