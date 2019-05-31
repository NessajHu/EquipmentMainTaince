#include "personalinformationshow.h"
#include <QSqlRecord>
#include <QDebug>
#include <QSqlError>

PersonalInformationShow::PersonalInformationShow(QWidget *parent) : QWidget(parent)
{
	addPersonInformation->hide();
	layout->addWidget(searchWidget, 0, 0, 5, 5);
	layout->addWidget(addButton, 5, 1, 1, 1);
	layout->addWidget(deleteButton, 5, 3, 1, 1);
	searchWidget->getModel()->setTable(QString("person"));/*
	searchWidget->getView()->hideColumn(4);
	searchWidget->getView()->hideColumn(8);
	searchWidget->getView()->hideColumn(9);*/
	addPersonInformation->model = searchWidget->getModel();
	qDebug() << "table" << searchWidget->getModel()->select();
	QObject::connect(searchWidget, &SearchWidget::itemDoubleClicked, [this](QSqlRecord item){emit this->itemDoubleClicked(item);});
	QObject::connect(addButton, &QPushButton::clicked, [this](){addPersonInformation->show();});
	QObject::connect(addPersonInformation, &AddPersonInformation::backButtonClicked, [this](){this->addPersonInformation->hide();});
	QObject::connect(deleteButton, &QPushButton::clicked, [this](){
		if(searchWidget->getView()->selectionModel()->currentIndex() != QModelIndex())
		{
			searchWidget->getModel()->removeRow(searchWidget->getView()->selectionModel()->currentIndex().row());
			searchWidget->getModel()->select();
		}
	});
	QObject::connect(addPersonInformation, &AddPersonInformation::newRecord, [this](QSqlRecord record){
		this->addPersonInformation->hide();
		/*qDebug() << "Do " << this->searchWidget->getModel()->insertRecord(0, record);
		qDebug() << this->searchWidget->getModel()->lastError();
		qDebug() << "Do " << this->searchWidget->getModel()->submitAll();*/
		this->searchWidget->getModel()->select();
	});
}

PersonalInformationShow::~PersonalInformationShow()
{
}
