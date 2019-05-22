#ifndef EQUIPMENTPURCHASE_H
#define EQUIPMENTPURCHASE_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QTableWidget>
#include <QGridLayout>

class EquipmentPurchase : public QWidget
{
	Q_OBJECT
public:
	explicit EquipmentPurchase(QWidget *parent = nullptr);
	QLineEdit *searchBar = new QLineEdit(this);
	QPushButton *searchButton = new QPushButton(this);
	QPushButton *refreshButton = new QPushButton(this);
	QTableWidget *table = new QTableWidget(this);
	QPushButton *newButton = new QPushButton(this);
	QPushButton *modifyButton = new QPushButton(this);
	QPushButton *deleteButton = new QPushButton(this);
	QPushButton *buyButton = new QPushButton(this);
	QGridLayout *layout = new QGridLayout(this);
signals:

public slots:
};

#endif // EQUIPMENTPURCHASE_H
