#include "todayplan.h"

TodayPlan::TodayPlan(QWidget *parent) : QWidget(parent)
{
	QStringList labels;
	labels << "ID" << "Name" << "Who" << "Type";

	searchWidget->getModel()->setTable(QString("everyday"));
	layout->addWidget(dateLabel, 0, 1, 1, 1, Qt::AlignRight);
	layout->addWidget(dateEdit, 0, 2, 1, 1);
	layout->addWidget(searchWidget, 1, 0, 4, 5);
	layout->addWidget(deleteButton, 5, 1, 1, 1);
	layout->addWidget(modifyButton, 5, 3, 1, 1);
	layout->setRowStretch(0, 1);
	layout->setRowStretch(1, 1);
	layout->setRowStretch(2, 1);
	layout->setRowStretch(3, 1);
	layout->setRowStretch(4, 0);
	dateLabel->setText("Date");
	deleteButton->setText("Delete");
	modifyButton->setText("Modify");
}
