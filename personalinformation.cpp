#include "personalinformation.h"
#include <QDebug>

PersonalInformation::PersonalInformation(QWidget *parent)
	: QStackedWidget(parent),
	  searchWidget(new SearchWidget(nullptr)),
	  personInformationModify(new PersonalInformationModify(nullptr))
{
	qDebug() << "test";
	addWidget(searchWidget);
	addWidget(personInformationModify);
	setCurrentWidget(searchWidget);
	QObject::connect(searchWidget, &SearchWidget::itemDoubleClicked, [this](){this->setCurrentWidget(personInformationModify);});
	QObject::connect(personInformationModify, &PersonalInformationModify::backButtonClicked, [this](){this->setCurrentWidget(searchWidget);});
	qDebug() << "eteet";
}
