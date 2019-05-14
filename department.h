#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <QVector>

class Department
{
public:
	Department(int num = 0, QString name = QString(""), QString introduction = QString(""), Department *parent = nullptr);
	void setParent(Department *p);
	void setNumber(int num);
	Department* getParent();
	int getNumber();
	static QVector<Department> departmentList;
private:
	QVector<Department *> childList = QVector<Department *>(0);
	QVector<int> personnelNumberList = QVector<int>(0);
	int number;
	QString name;
	QString introduction;
	Department *parent;
};

QVector<Department> Department::departmentList = QVector<Department>(0);

#endif // DEPARTMENT_H
