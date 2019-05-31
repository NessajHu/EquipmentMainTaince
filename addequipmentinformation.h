#ifndef ADDEQUIPMENTINFORMATION_H
#define ADDEQUIPMENTINFORMATION_H

#include <QWidget>
#include "equipmentinformationmodify.h"

class AddEquipmentInformation : public QWidget
{
	Q_OBJECT
public:
	explicit AddEquipmentInformation(QWidget *parent = nullptr);
	EquipmentInformationModify *modify = new EquipmentInformationModify(this);
	QPushButton *addButton = new QPushButton(this);
	QGridLayout *layout = new QGridLayout(this);
signals:
	void backButtonClicked();

public slots:
};

#endif // ADDEQUIPMENTINFORMATION_H
