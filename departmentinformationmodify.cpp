#include "departmentinformationmodify.h"

DepartmentInformationModify::DepartmentInformationModify(QWidget *parent) : QWidget(parent)
{
	backButton->setText("Back");
	layout->addWidget(backButton, 0, 0, 1, 1, Qt::AlignLeft);
	layout->addWidget(numberWidget, 1, 0, 1, 1, Qt::AlignTop);
	layout->addWidget(nameWidget, 1, 1, 1, 1, Qt::AlignTop);
	layout->addWidget(parentWidget, 2, 0, 1, 1, Qt::AlignTop);
	layout->addWidget(introductionWidget, 2, 1, 1, 1, Qt::AlignTop);
	QObject::connect(backButton, &QPushButton::clicked, [this](){emit backButtonClicked();});


}

void DepartmentInformationModify::setData(QTreeWidgetItem *item)
{
	numberWidget->setData(item->text(0));
	nameWidget->setData(item->text(1));
	parentWidget->setData(item->text(2));
	introductionWidget->setData(item->text(3));
}
