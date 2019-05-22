#ifndef TODAYPLAN_H
#define TODAYPLAN_H

#include <QWidget>
#include <searchwidget.h>
#include <QPushButton>
#include <QGridLayout>
#include <QDateEdit>
#include <QLabel>

class TodayPlan : public QWidget
{
	Q_OBJECT
public:
	explicit TodayPlan(QWidget *parent = nullptr);
private:
	QLabel *dateLabel = new QLabel(this);
	QDateEdit *dateEdit = new QDateEdit(this);
	SearchWidget *searchWidget = new SearchWidget(this);
	QPushButton *deleteButton = new QPushButton(this);
	QPushButton *modifyButton = new QPushButton(this);
	QGridLayout *layout = new QGridLayout(this);
signals:
public slots:
};

#endif // TODAYPLAN_H
