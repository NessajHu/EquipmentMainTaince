#ifndef PERSONALINFORMATIONMODIFY_H
#define PERSONALINFORMATIONMODIFY_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include "showmodifywidget.h"
#include <QGridLayout>
#include <QSqlRecord>
#include <QSqlTableModel>

class PersonalInformationModify : public QWidget
{
	Q_OBJECT
public:
	explicit PersonalInformationModify(QWidget *parent = nullptr);
	QPushButton *backButton;
	ShowModifyWidget<> *nameWidget;
	ShowModifyWidget<> *sexWidget;
	ShowModifyWidget<QLabel, QPixmap> *pictureWidget;
	ShowModifyWidget<> *jobNumberWidget;
	ShowModifyWidget<> *passwordWidget;
	ShowModifyWidget<> *birthdayWidget;
	ShowModifyWidget<> *addressWidget;
	ShowModifyWidget<> *mobilePhoneWidget;
	ShowModifyWidget<> *emailWidget;
	ShowModifyWidget<> *departmentWidget;
	ShowModifyWidget<> *remarkWidget;
	QGridLayout *layout;
	bool check();
	void setData(QSqlRecord);
signals:
	void backButtonClicked();
	void confirm(QString, int);
};

#endif // PERSONALINFORMATIONMODIFY_H
