#ifndef EQUIPMENTSCRAPPING_H
#define EQUIPMENTSCRAPPING_H

#include <QWidget>
#include <QTableWidget>
#include "tabwidget.h"
#include "searchwidget.h"
#include <QGridLayout>
#include <QPushButton>
#include "equipmentinformationmodify.h"

class EquipmentScrapping : public QWidget
{
	Q_OBJECT
public:
	explicit EquipmentScrapping(QWidget *parent = nullptr);
private:
	SearchWidget *searchWidget = new SearchWidget(this);
	EquipmentInformationModify *modify = new EquipmentInformationModify(this);
	QPushButton *deleteButton = new QPushButton(QString("Delete"), this);
	QGridLayout *layout = new QGridLayout(this);
	QTableWidget *table = new QTableWidget(this);
};

#endif // EQUIPMENTSCRAPPING_H
