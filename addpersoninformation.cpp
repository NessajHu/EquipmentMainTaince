#include "addpersoninformation.h"
#include <QDebug>
#include <QSqlError>

AddPersonInformation::AddPersonInformation(QWidget *parent) : QWidget(parent)
{
	hide();
	setWindowFlags(Qt::Dialog);
	setWindowModality(Qt::WindowModal);
	modify->nameWidget->setButtonVisible(false);
	modify->sexWidget->setButtonVisible(false);
	modify->pictureWidget->setButtonVisible(true);
	modify->jobNumberWidget->setButtonVisible(false);
	modify->passwordWidget->setButtonVisible(false);
	modify->birthdayWidget->setButtonVisible(false);
	modify->addressWidget->setButtonVisible(false);
	modify->mobilePhoneWidget->setButtonVisible(false);
	modify->emailWidget->setButtonVisible(false);
	modify->departmentWidget->setButtonVisible(false);
	modify->remarkWidget->setButtonVisible(false);
	layout->addWidget(modify, 0, 0, 5, 5);
	layout->addWidget(addButton, 5, 2, 1, 1);

	QObject::connect(modify->backButton, &QPushButton::clicked, [this](){emit this->backButtonClicked();});
	QObject::connect(addButton, &QPushButton::clicked, [this](){
		model->insertRows(0, 1);
		model->setData(model->index(0, 0), modify->jobNumberWidget->getData().toInt());
		model->setData(model->index(0, 1), modify->departmentWidget->getData().toInt());
		model->setData(model->index(0, 2), modify->remarkWidget->getData());
		model->setData(model->index(0, 3), modify->nameWidget->getData());
		model->setData(model->index(0, 4), modify->pictureWidget->getData());
		model->setData(model->index(0, 5), modify->mobilePhoneWidget->getData());
		model->setData(model->index(0, 6), modify->emailWidget->getData());
		model->setData(model->index(0, 7), modify->sexWidget->getData());
		model->setData(model->index(0, 8), modify->passwordWidget->getData());
		model->setData(model->index(0, 9), 0);
		model->setData(model->index(0, 10), modify->birthdayWidget->getData());
		model->setData(model->index(0, 11), modify->addressWidget->getData());
		qDebug() << model->submitAll();
		qDebug() << model->lastError() << modify->pictureWidget->getData();
		qDebug() << model->select();
		emit this->newRecord(QSqlRecord());
	});
}


bool AddPersonInformation::check()
{
	if(true)
		return true;
}
