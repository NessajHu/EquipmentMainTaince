#include "equipmentmaintainceplanmodify.h"

EquipmentMaintaincePlanModify::EquipmentMaintaincePlanModify(QWidget *parent) : QWidget(parent)
{
	layout->addWidget(backButton, 0, 0, 1, 1, Qt::AlignLeft | Qt::AlignLeft);
	layout->addWidget(beginDateWidget, 1, 0, 1, 2);
	layout->addWidget(endDateWidget, 1, 2, 1, 2);
	layout->addWidget(maintainceYypeWidget, 1, 4, 1, 1);
	layout->addWidget(yearsWidget, 2, 0, 1, 1);
	layout->addWidget(monthsWidget, 2, 2, 1, 1);
	layout->addWidget(daysWidget, 2, 4, 1, 1);
	layout->addWidget(errorYearsWidget, 3, 0, 1, 1);
	layout->addWidget(errorMonthsWidget, 3, 2, 1, 1);
	layout->addWidget(errorDaysWidget, 3, 4, 1, 1);
	layout->addWidget(submitButton, 4, 2, 1, 1);
	QObject::connect(submitButton, &QPushButton::clicked, [this](){emit submitButtonClicked();});
	QObject::connect(backButton, &QPushButton::clicked, [this](){emit backButtonClicked();});
	QObject::connect(beginDateWidget, &ShowModifyWidget<QDateEdit, QDate>::confirm, [this](QString text){emit this->confirm(text, 3);});
	QObject::connect(endDateWidget, &ShowModifyWidget<QDateEdit, QDate>::confirm, [this](QString text){emit this->confirm(text, 7);});
	QObject::connect(maintainceYypeWidget, &ShowModifyWidget<QComboBox, QString>::confirm, [this](QString text){emit this->confirm(text, 4);});
	QObject::connect(yearsWidget, &ShowModifyWidget<QLineEdit, QString>::confirm, [this](QString text){emit this->confirm(text, 0);});
	QObject::connect(monthsWidget, &ShowModifyWidget<QLineEdit, QString>::confirm, [this](QString text){emit this->confirm(text, 8);});
	QObject::connect(daysWidget, &ShowModifyWidget<QLineEdit, QString>::confirm, [this](QString text){emit this->confirm(text, 10);});
	QObject::connect(errorYearsWidget, &ShowModifyWidget<QLineEdit, QString>::confirm, [this](QString text){emit this->confirm(text, 11);});
	QObject::connect(errorMonthsWidget, &ShowModifyWidget<QLineEdit, QString>::confirm, [this](QString text){emit this->confirm(text, 5);});
	QObject::connect(errorDaysWidget, &ShowModifyWidget<QLineEdit, QString>::confirm, [this](QString text){emit this->confirm(text, 6);});
}
