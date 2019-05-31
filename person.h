#ifndef PERSON_H
#define PERSON_H

#include <QString>
#include <QPixmap>
#include <QSqlRecord>
class Person
{
public:
	Person();
	Person(QSqlRecord item);
	QString name;
	QString sex;
	QPixmap picture;
	int jobnumber;
	QString id;
	QString birthday;
	QString address;
	QString mobilePhone;
	QString email;
	int departmentWidget;
	QString remark;
	bool type;
};

#endif // PERSON_H
