#include "adddepartmentinformation.h"

AddDepartmentInformation::AddDepartmentInformation(QWidget *parent) : QWidget(parent)
{
	hide();
	setWindowFlags(Qt::Dialog);
	setWindowModality(Qt::WindowModal);layout->addWidget(modify, 0, 0, 5, 5);
	modify->numberWidget->setVisible(false);
	modify->nameWidget->setVisible(false);
	modify->parentWidget->setVisible(false);
	modify->introductionWidget->setVisible(false);
	layout->addWidget(modify, 0, 0, 5, 5);
	layout->addWidget(addButton, 5, 2, 1, 1);
	QObject::connect(modify->backButton, &QPushButton::clicked, [this](){emit this->backButtonClicked();});
	QObject::connect(addButton, &QPushButton::clicked, [this](){

	});
}
