#ifndef PERSONALINFORMATION_H
#define PERSONALINFORMATION_H

#include <QStackedWidget>
#include "personalinformationmodify.h"
#include "personalinformationshow.h"

class PersonalInformation : public QStackedWidget
{
	Q_OBJECT
public:
	explicit PersonalInformation(QWidget *parent = nullptr);
private:
	PersonalInformationModify *personInformationModify = new PersonalInformationModify(this);
	PersonalInformationShow *personInformationShow = new PersonalInformationShow(this);
signals:

public slots:
};

#endif // PERSONALINFORMATION_H
