#include "searchwidget.h"

#include <QIcon>
#include <QStringList>
#include <QHeaderView>
#include <QDebug>
#include <QSqlRecord>

SearchWidget::SearchWidget(QWidget *parent)
	: QWidget(parent)
{
	table->setModel(model);
	searchBar->setPlaceholderText("Name Or ID");
	searchButton->setText("Search");
	QIcon refreshButtonIcon(QString(":/icon/icon/refresh.png"));
	refreshButton->setIcon(refreshButtonIcon);
	layout->addWidget(searchBar, 0, 0, 1, 5);
	layout->addWidget(searchButton, 0, 5, 1, 1);
	layout->addWidget(refreshButton, 0, 6, 1, 1);
	layout->addWidget(table, 1, 0, 1, 7);
	//if setComlumn is after the setHorizontalHeaderLabels, the latter will lose effectiveness
	QStringList tableHeaders;
	tableHeaders << "Name"  << "Job Number" << "ID" << "Sex" << "Address" << "Birthday"
				 << "Mobile Phone" << "Email" << "Remark" << "Department";
	table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	table->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	table->setEditTriggers(QAbstractItemView::NoEditTriggers);
	QObject::connect(table, &QTableView::doubleClicked, [this](){
		emit itemDoubleClicked(model->record(table->currentIndex().row()));
	});
	QObject::connect(searchButton, &QPushButton::clicked, this, [this](){
		model->setFilter(QString("person_job_id = '%1'").arg(searchBar->text()));
		model->select();
	});
	QObject::connect(refreshButton, &QPushButton::clicked, [this](){
		model->setFilter(QString(""));
		model->select();
	});
}


void SearchWidget::setLabels(QStringList labels)
{
	/*table->setRowCount(labels.size());
	table->setHorizontalHeaderLabels(labels);*/
}

void SearchWidget::setPlaceholderText(QString placeholderText)
{
	searchBar->setPlaceholderText(placeholderText);
}

QSqlTableModel *SearchWidget::getModel() const
{
	return model;
}

void SearchWidget::setModel(QSqlTableModel *value)
{
	model = value;
}

QTableView *SearchWidget::getView()
{
	return table;
}
