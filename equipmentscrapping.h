#ifndef EQUIPMENTSCRAPPING_H
#define EQUIPMENTSCRAPPING_H

#include <QWidget>
#include <QTableWidget>
#include "tabwidget.h"
#include <QGridLayout>

class EquipmentScrapping : public QWidget
{
	Q_OBJECT
public:
	explicit EquipmentScrapping(QWidget *parent = nullptr);
private:
	TabWidget<QTabWidget::West> *tabWidget = new TabWidget<QTabWidget::West>(this);
	QGridLayout *layout = new QGridLayout(this);
	QTableWidget *table = new QTableWidget(this);
};

#endif // EQUIPMENTSCRAPPING_H
