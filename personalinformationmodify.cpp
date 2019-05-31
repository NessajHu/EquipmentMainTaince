#include "personalinformationmodify.h"
#include <QFileDialog>

PersonalInformationModify::PersonalInformationModify(QWidget *parent)
	: QWidget(parent),
	  backButton(new QPushButton(this)),
	  nameWidget(new ShowModifyWidget(this, QString("Name"), false)),
	  sexWidget(new ShowModifyWidget(this, QString("Sex"), false)),
	  pictureWidget(new ShowModifyWidget<QLabel, QPixmap>(this, QString("Picture"), true)),
	  jobNumberWidget(new ShowModifyWidget(this, QString("Job Number"), false)),
	  passwordWidget(new ShowModifyWidget(this, QString("Password"), false)),
	  birthdayWidget(new ShowModifyWidget(this, QString("Birthday"), false)),
	  addressWidget(new ShowModifyWidget(this, QString("Address"), false)),
	  mobilePhoneWidget(new ShowModifyWidget(this, QString("Mobile Phone"), true)),
	  emailWidget(new ShowModifyWidget(this, QString("Email"), true)),
	  departmentWidget(new ShowModifyWidget(this, QString("Department"), true)),
	  remarkWidget(new ShowModifyWidget(this, QString("Remark"), true)),
	  layout(new QGridLayout(this))
{
	backButton->setText("Back");
	pictureWidget->setData(QPixmap(":/icon/icon/refresh.png"));
	QObject::connect(backButton, &QPushButton::clicked, [this](){emit backButtonClicked();});
	/*QObject::connect(pictureWidget, &ShowModifyWidget<QLabel, QPixmap>::confirm, [this](){
		QString fileName = QFileDialog::getOpenFileName(this, QString("Choose Picture"), QString(""), QString("Images(*.png *.jpg)"));
		pictureWidget->setData(QPixmap(fileName));
	});*/
	layout->addWidget(backButton, 0, 0, 1, 1, Qt::AlignLeft | Qt::AlignTop);
	layout->addWidget(nameWidget, 1, 0, 1, 1, Qt::AlignVCenter);
	layout->addWidget(sexWidget, 1, 1, 1, 1, Qt::AlignVCenter);
	layout->addWidget(pictureWidget, 1, 2, 1, 1, Qt::AlignVCenter);
	layout->addWidget(jobNumberWidget, 2, 0, 1, 1, Qt::AlignVCenter);
	layout->addWidget(passwordWidget, 2, 1, 1, 1, Qt::AlignVCenter);
	layout->addWidget(birthdayWidget, 2, 2, 1, 1, Qt::AlignVCenter);
	layout->addWidget(addressWidget, 3, 0, 1, 1, Qt::AlignVCenter);
	layout->addWidget(mobilePhoneWidget, 3, 1, 1, 1, Qt::AlignVCenter);
	layout->addWidget(emailWidget, 3, 2, 1, 1, Qt::AlignVCenter);
	layout->addWidget(departmentWidget, 4, 0, 1, 1, Qt::AlignVCenter);
	layout->addWidget(remarkWidget, 4, 1, 1, 1, Qt::AlignVCenter);
}

bool PersonalInformationModify::check()
{
	if(nameWidget->getData() == QString(""))
		return false;
	return true;
}

void PersonalInformationModify::setData(QSqlRecord record)
{
	nameWidget->setData(record.value(3).toString());
	sexWidget->setData(record.value(7).toString());
	pictureWidget->setData(record.value(4).toString());
	jobNumberWidget->setData(record.value(0).toString());
	passwordWidget->setData(record.value(8).toString());
	birthdayWidget->setData(record.value(10).toString());
	addressWidget->setData(record.value(11).toString());
	mobilePhoneWidget->setData(record.value(5).toString());
	emailWidget->setData(record.value(6).toString());
	departmentWidget->setData(record.value(1).toString());
	remarkWidget->setData(record.value(2).toString());
}
