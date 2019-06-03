#ifndef PERSONALINFORMATIONSHOW_H
#define PERSONALINFORMATIONSHOW_H

#include <QWidget>
#include "searchwidget.h"
#include <QPushButton>
#include <QGridLayout>
#include <QTableWidget>
#include <QSqlTableModel>
#include "addpersoninformation.h"

class PersonalInformationShow : public QWidget
{
	Q_OBJECT
public:
	explicit PersonalInformationShow(QWidget *parent = nullptr);
	~PersonalInformationShow();
	QPushButton *addButton = new QPushButton("Add", this);
	QPushButton *deleteButton = new QPushButton("Delete", this);
	SearchWidget *searchWidget = new SearchWidget(this);
	QGridLayout *layout = new QGridLayout(this);
	AddPersonInformation *addPersonInformation = new AddPersonInformation(this);
signals:
	void itemDoubleClicked(QSqlRecord item);
public slots:
	void getData(QString text, int index);
};

#endif // PERSONALINFORMATIONSHOW_H
