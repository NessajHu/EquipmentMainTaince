#ifndef ADDEQUIPMENTINFORMATION_H
#define ADDEQUIPMENTINFORMATION_H

#include <QWidget>
#include "equipmentinformationmodify.h"
#include <QSqlTableModel>
#include <QSqlRecord>

class AddEquipmentInformation : public QWidget
{
	Q_OBJECT
public:
	explicit AddEquipmentInformation(QWidget *parent = nullptr);
	EquipmentInformationModify *modify = new EquipmentInformationModify(this);
	QPushButton *addButton = new QPushButton(this);
	QGridLayout *layout = new QGridLayout(this);
	QSqlTableModel *model;
signals:
	void backButtonClicked();
	void newRecord(QSqlRecord);
public slots:
};

#endif // ADDEQUIPMENTINFORMATION_H
