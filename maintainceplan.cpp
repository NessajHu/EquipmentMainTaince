#include "maintainceplan.h"

const QVector<QString> MaintaincePlan::typeStrings{"Routine", "Designated", "Repair"};

MaintaincePlan::MaintaincePlan(QDate beginDate, QDate endDate, QString maintainceType, int years, int months, int days, int errorYears, int errorMonths, int errorDays)
	: beginDate(beginDate),
	  endDate(endDate),
	  maintainceType(stringToType(maintainceType)),
	  years(years),
	  months(months),
	  days(days),
	  errorYears(errorYears),
	  errorMonths(errorMonths),
	  errorDays(errorDays)
{

}

MaintaincePlan::Type MaintaincePlan::stringToType(const QString &string)
{
	for(auto i = typeStrings.begin(); i < typeStrings.end(); ++i)
	{
		if(*i == string)
			return MaintaincePlan::Type{static_cast<int>(i - typeStrings.begin())};
	}
	return MaintaincePlan::Type::Repair;
}
