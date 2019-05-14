#ifndef DEPARTMENTINFORMATION_H
#define DEPARTMENTINFORMATION_H

#include <QStackedWidget>
#include "departmentshow.h"
#include "departmentinformationmodify.h"

class DepartmentInformation : public QStackedWidget
{
	Q_OBJECT
public:
	explicit DepartmentInformation(QWidget *parent = nullptr);
private:
	DepartmentShow *departmentShow = new DepartmentShow(this);
	DepartmentInformationModify *departmentInformationModify = new DepartmentInformationModify(this);
};

#endif // DEPARTMENTINFORMATION_H
