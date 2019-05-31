#ifndef ADDPERSONINFORMATION_H
#define ADDPERSONINFORMATION_H

#include <QWidget>
#include "personalinformationmodify.h"
#include <QPushButton>
#include <QGridLayout>
#include <QSqlRecord>
#include <QSqlTableModel>

class AddPersonInformation : public QWidget
{
	Q_OBJECT
	bool check();
public:
	AddPersonInformation(QWidget *parent);
	PersonalInformationModify *modify = new PersonalInformationModify(this);
	QPushButton *addButton = new QPushButton(this);
	QGridLayout *layout = new QGridLayout(this);
	QSqlTableModel *model;
signals:
	void backButtonClicked();
	void newRecord(QSqlRecord);
};

#endif // ADDPERSONINFORMATION_H
