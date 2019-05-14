#ifndef DEPARTMENTINFORMATIONMODIFY_H
#define DEPARTMENTINFORMATIONMODIFY_H

#include <QWidget>
#include "showmodifywidget.h"
#include <QGridLayout>
#include <QPushButton>
#include <QTreeWidgetItem>

class DepartmentInformationModify : public QWidget
{
	Q_OBJECT
public:
	explicit DepartmentInformationModify(QWidget *parent = nullptr);
	void setData(QTreeWidgetItem *item);
private:
	QPushButton *backButton = new QPushButton(this);
	ShowModifyWidget<> *numberWidget = new ShowModifyWidget(this, QString("Number"), false);
	ShowModifyWidget<> *nameWidget = new ShowModifyWidget(this, QString("Name"), true);
	ShowModifyWidget<> *parentWidget = new ShowModifyWidget(this, QString("Parent"), true);
	ShowModifyWidget<> *introductionWidget = new ShowModifyWidget(this, QString("Introduction"), true);
	QGridLayout *layout = new QGridLayout(this);
signals:
	void backButtonClicked();
public slots:
};

#endif // DEPARTMENTINFORMATIONMODIFY_H
