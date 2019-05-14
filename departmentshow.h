#ifndef DEPARTMENTSHOW_H
#define DEPARTMENTSHOW_H

#include <QWidget>
#include <QTreeWidget>
#include <QGridLayout>

class DepartmentShow : public QWidget
{
	Q_OBJECT
public:
	explicit DepartmentShow(QWidget *parent = nullptr);
private:
	QTreeWidget *departmentListInformation;
	QGridLayout *layout;
signals:
	void itemDoubleClicked(QTreeWidgetItem *item);
public slots:
};

#endif // DEPARTMENTSHOW_H
