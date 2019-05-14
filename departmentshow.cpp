#include "departmentshow.h"
#include <QTreeWidgetItem>
#include <QStringList>
#include <QDebug>

DepartmentShow::DepartmentShow(QWidget *parent)
	: QWidget(parent),
	  departmentListInformation(new QTreeWidget(this)),
	  layout(new QGridLayout(this))
{
	qDebug() << "eeeee";
	layout->addWidget(departmentListInformation);
	departmentListInformation->setColumnCount(3);
	QStringList labelList = {"No.", "Name", "Parent", "Information"};
	departmentListInformation->setHeaderLabels(labelList);
	QObject::connect(departmentListInformation, &QTreeWidget::itemDoubleClicked, [this](QTreeWidgetItem *item){emit itemDoubleClicked(item);});
	QTreeWidgetItem *test = new QTreeWidgetItem(departmentListInformation);
	test->setText(0, "test");
	test->setText(1, "tests");
	test->setText(2, "5");
	test->setText(3, "testcalling");
	QTreeWidgetItem *tests = new QTreeWidgetItem(test);
	tests->setText(0, "child1");
	tests->setText(1, "child1 2");
	tests->setText(2, "56");
	tests->setText(3, "testcallindddg");
}
