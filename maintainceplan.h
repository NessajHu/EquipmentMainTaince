#ifndef MAINTAINCEPLAN_H
#define MAINTAINCEPLAN_H

#include <QDate>
#include <QVector>

class MaintaincePlan
{
public:
	enum class Type
	{
		RouTine = 0,
		Designated = 1,
		Repair = 2
	};
	MaintaincePlan(QDate beginDate, QDate endDate, QString maintainceType, int years = 0, int months = 0, int days = 0, int errorYears = 0, int errorMonths = 0, int errorDays = 0);
private:
	static Type stringToType(const QString &string);
	static const QVector<QString> typeStrings;
	QDate beginDate;
	QDate endDate;
	Type maintainceType = Type::RouTine;
	int years;
	int months;
	int days;
	int errorYears;
	int errorMonths;
	int errorDays;
};

#endif // MAINTAINCEPLAN_H
