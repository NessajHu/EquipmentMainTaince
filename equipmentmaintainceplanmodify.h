#ifndef EQUIPMENTMAINTAINCEPLANMODIFY_H
#define EQUIPMENTMAINTAINCEPLANMODIFY_H

#include <QWidget>
#include "showmodifywidget.h"
#include <QDateEdit>
#include "maintainceplan.h"
#include <QComboBox>
#include <QTextEdit>
#include <QGridLayout>
#include <QPushButton>

class EquipmentMaintaincePlanModify : public QWidget
{
	Q_OBJECT
public:
	explicit EquipmentMaintaincePlanModify(QWidget *parent = nullptr);
	QPushButton *backButton = new QPushButton(QString("Back"), this);
	ShowModifyWidget<QDateEdit, QDate> *beginDateWidget = new ShowModifyWidget<QDateEdit, QDate>(this, QString("Begin Date"));
	ShowModifyWidget<QDateEdit, QDate> *endDateWidget = new ShowModifyWidget<QDateEdit, QDate>(this, QString("End Date"));
	ShowModifyWidget<QComboBox, QString> *maintainceYypeWidget = new ShowModifyWidget<QComboBox, QString>(this, QString("Maintaince Type"));
	ShowModifyWidget<QLineEdit, QString> *yearsWidget = new ShowModifyWidget<QLineEdit, QString>(this, QString("Every Year"));
	ShowModifyWidget<QLineEdit, QString> *monthsWidget = new ShowModifyWidget<QLineEdit, QString>(this, QString("Every Months"));
	ShowModifyWidget<QLineEdit, QString> *daysWidget = new ShowModifyWidget<QLineEdit, QString>(this, QString("Every Days"));
	ShowModifyWidget<QLineEdit, QString> *errorYearsWidget = new ShowModifyWidget<QLineEdit, QString>(this, QString("Error Years"));
	ShowModifyWidget<QLineEdit, QString> *errorMonthsWidget = new ShowModifyWidget<QLineEdit, QString>(this, QString("Error Months"));
	ShowModifyWidget<QLineEdit, QString> *errorDaysWidget = new ShowModifyWidget<QLineEdit, QString>(this, QString("Error Days"));
	QPushButton *submitButton = new QPushButton(this);
	QGridLayout *layout = new QGridLayout(this);
signals:
	void submitButtonClicked();
	void backButtonClicked();
	void confirm(QString, int);
public slots:
};

#endif // EQUIPMENTMAINTAINCEPLANMODIFY_H
