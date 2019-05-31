#include "personalinformation.h"
#include <QDebug>

PersonalInformation::PersonalInformation(QWidget *parent)
	: QStackedWidget(parent)
{
	addWidget(personInformationShow);
	addWidget(personInformationModify);
	setCurrentWidget(personInformationShow);
	QObject::connect(personInformationShow, &PersonalInformationShow::itemDoubleClicked, [this](QSqlRecord record){personInformationModify->setData(record); this->setCurrentWidget(personInformationModify);});
	QObject::connect(personInformationModify, &PersonalInformationModify::backButtonClicked, [this](){this->setCurrentWidget(personInformationShow);});
}
