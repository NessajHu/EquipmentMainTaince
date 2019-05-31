#ifndef EQUIPMENTMAINTAINCEPLANSEARCH_H
#define EQUIPMENTMAINTAINCEPLANSEARCH_H

#include <QWidget>
#include "searchwidget.h"
#include <QGridLayout>

class EquipmentMaintaincePlanSearch : public QWidget
{
	Q_OBJECT
public:
	explicit EquipmentMaintaincePlanSearch(QWidget *parent = nullptr);
	SearchWidget *searchWidget = new SearchWidget(this);
	QPushButton *addButton = new QPushButton(QString("Add"), this);
	QPushButton *deleteButton = new QPushButton(QString("Delete"), this);
	QPushButton *modifyButton = new QPushButton(QString("Modify"), this);
	QGridLayout *layout = new QGridLayout(this);
signals:
	void itemDoubleClicked(QSqlRecord item);
public slots:
};

#endif // EQUIPMENTMAINTAINCEPLANSEARCH_H
