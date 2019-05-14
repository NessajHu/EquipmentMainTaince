#include "departmentinformation.h"
#include <QTreeWidgetItem>
#include <QDebug>
DepartmentInformation::DepartmentInformation(QWidget *parent)
	: QStackedWidget(parent)
{
	qDebug() << "departmentInformaiton Constructor in";
	addWidget(departmentShow);
	addWidget(departmentInformationModify);
	setCurrentWidget(departmentShow);
	QObject::connect(departmentShow, &DepartmentShow::itemDoubleClicked, [this]([[maybe_unused]]QTreeWidgetItem *item){
		departmentInformationModify->setData(item);
		this->setCurrentWidget(departmentInformationModify);
	});
	QObject::connect(departmentInformationModify, &DepartmentInformationModify::backButtonClicked, [this](){this->setCurrentWidget(departmentShow);});
}
