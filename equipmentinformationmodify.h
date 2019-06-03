#ifndef EQUIPMENTINFORMATIONMODIFY_H
#define EQUIPMENTINFORMATIONMODIFY_H

#include <QWidget>
#include "showmodifywidget.h"
#include <QGridLayout>

class EquipmentInformationModify : public QWidget
{
	Q_OBJECT
public:
	explicit EquipmentInformationModify(QWidget *parent = nullptr);
	QPushButton *backButton = new QPushButton(QString("Back"), this);
	ShowModifyWidget<> *nameWidget = new ShowModifyWidget(this, QString("Name"));
	ShowModifyWidget<> *idWidget = new ShowModifyWidget(this, QString("ID"));
	ShowModifyWidget<QComboBox, QString> *equipmentTypeWidget = new ShowModifyWidget<QComboBox, QString>(this, QString("Equipment Type"));
	ShowModifyWidget<> *manufacturerWidget = new ShowModifyWidget(this, QString("Manufacturer"));
	ShowModifyWidget<> *pictureWidget = new ShowModifyWidget(this, QString("Picture"));
	ShowModifyWidget<> *priceWidget = new ShowModifyWidget(this, QString("Price"));
	ShowModifyWidget<> *powerWidget = new ShowModifyWidget(this, QString("Power"));
	ShowModifyWidget<QComboBox, QString> *usageStateWidget = new ShowModifyWidget<QComboBox, QString>(this, QString("Usage State"));
	ShowModifyWidget<> *locationWidget = new ShowModifyWidget(this, QString("Location"));
	ShowModifyWidget<> *serviceLifeWidget = new ShowModifyWidget(this, QString("Service Life"));
	ShowModifyWidget<QDateEdit, QDate> *purchaseDateWidget = new ShowModifyWidget<QDateEdit, QDate>(this, QString("Purchase Date"));
	ShowModifyWidget<> *personWidget = new ShowModifyWidget(this, QString("Person"));
	QGridLayout *layout = new QGridLayout(this);
signals:
	void confirm(QString, int);

public slots:
};

#endif // EQUIPMENTINFORMATIONMODIFY_H
