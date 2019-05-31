#ifndef EQUIPMENTINFORMATIONWIDGET_H
#define EQUIPMENTINFORMATIONWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include "searchwidget.h"

class EquipmentInformationWidget : public QWidget
{
	Q_OBJECT
public:
	explicit EquipmentInformationWidget(QWidget *parent = nullptr);
	SearchWidget *searchWidget = new SearchWidget(this);
	QPushButton *deleteButton = new QPushButton(QString("Scrapping"), this);
	QGridLayout *layout = new QGridLayout(this);
signals:

public slots:
};

#endif // EQUIPMENTINFORMATIONWIDGET_H
