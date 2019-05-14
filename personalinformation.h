#ifndef PERSONALINFORMATION_H
#define PERSONALINFORMATION_H

#include <QStackedWidget>
#include "searchwidget.h"
#include "personalinformationmodify.h"

class PersonalInformation : public QStackedWidget
{
	Q_OBJECT
public:
	explicit PersonalInformation(QWidget *parent = nullptr);
private:
	SearchWidget *searchWidget;
	PersonalInformationModify *personInformationModify;
signals:

public slots:
};

#endif // PERSONALINFORMATION_H
