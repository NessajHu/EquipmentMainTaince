#include "department.h"

Department::Department(int num, QString name, QString introduction, Department *parent)
	: number(num),
	  name(name),
	  introduction(introduction),
	  parent(parent)
{
	if(parent != nullptr)
	{
		parent->childList.push_back(this);
	}
	departmentList.push_back(*this);
}

void Department::setParent(Department *p)
{
	parent = p;
}

void Department::setNumber(int num)
{
	number = num;
}

Department* Department::getParent()
{
	return parent;
}

int Department::getNumber()
{
	return number;
}
