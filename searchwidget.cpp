#include "searchwidget.h"

#include <QIcon>
#include <QStringList>
#include <QHeaderView>
#include <QDebug>

SearchWidget::SearchWidget(QWidget *parent)
	: QWidget(parent),
	  searchBar(new QLineEdit(this)),
	  searchButton(new QPushButton(this)),
	  refreshButton(new QPushButton(this)),
	  table(new QTableWidget(this)),
	  layout(new QGridLayout(this))
{
	searchBar->setPlaceholderText("Name Or ID");
	searchButton->setText("Search");
	QIcon refreshButtonIcon(QString(":/icon/icon/refresh.png"));
	refreshButton->setIcon(refreshButtonIcon);
	layout->addWidget(searchBar, 0, 0, 1, 5);
	layout->addWidget(searchButton, 0, 5, 1, 1);
	layout->addWidget(refreshButton, 0, 6, 1, 1);
	layout->addWidget(table, 1, 0, 1, 7);
	table->setRowCount(30);
	table->setColumnCount(10);
	//if setComlumn is after the setHorizontalHeaderLabels, the latter will lose effectiveness
	QStringList tableHeaders;
	tableHeaders << "Name"  << "Job Number" << "ID" << "Sex" << "Address" << "Birthday"
				 << "Mobile Phone" << "Email" << "Remark" << "Department";
	table->setHorizontalHeaderLabels(tableHeaders);
	table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	table->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	table->setEditTriggers(QAbstractItemView::NoEditTriggers);
	table->setItem(0, 0, new QTableWidgetItem("test"));
	table->setItem(1, 2, new QTableWidgetItem("test"));
	table->setItem(2, 1, new QTableWidgetItem("test"));
	table->setItem(3, 3, new QTableWidgetItem("test"));
	QObject::connect(table, &QTableWidget::itemDoubleClicked, [&]([[maybe_unused]]QTableWidgetItem *currentItem){emit itemDoubleClicked(currentItem);});
}

void SearchWidget::setLabels(QStringList labels)
{
	table->setRowCount(labels.size());
	table->setHorizontalHeaderLabels(labels);
}

void SearchWidget::setPlaceholderText(QString placeholderText)
{
	searchBar->setPlaceholderText(placeholderText);
}
