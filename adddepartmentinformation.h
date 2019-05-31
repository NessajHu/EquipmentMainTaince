#ifndef ADDDEPARTMENTINFORMATION_H
#define ADDDEPARTMENTINFORMATION_H

#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include <departmentinformationmodify.h>

class AddDepartmentInformation : public QWidget
{
	Q_OBJECT
public:
	explicit AddDepartmentInformation(QWidget *parent = nullptr);
	DepartmentInformationModify *modify = new DepartmentInformationModify(this);
	QPushButton *addButton = new QPushButton(QString("Add"), this);
	QGridLayout *layout = new QGridLayout(this);
signals:
	void backButtonClicked();

public slots:
};

#endif // ADDDEPARTMENTINFORMATION_H
