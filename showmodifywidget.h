#ifndef SHOWMODIFYWIDGET_H
#define SHOWMODIFYWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QPixmap>

class Proxy : public QWidget
{
	Q_OBJECT
public:
	explicit Proxy(QWidget *parent = nullptr) : QWidget(parent){}
signals:
	void confirm();
};

template<typename LabelType = QLineEdit, typename DataType = QString>
class ShowModifyWidget : public Proxy
{
public:
	explicit ShowModifyWidget(QWidget *parent = nullptr, const QString &labelText = QString(""), bool buttonEnabled = true);
	void setData(DataType data);
private:
	void setLabelReadOnly([[maybe_unused]]bool readOnly);
	QLabel *showLabel;
	LabelType *modifyLabel;
	QPushButton *confirmButton;
	QHBoxLayout *layout;
};


template<typename LabelType, typename DataType>
ShowModifyWidget<LabelType, DataType>::ShowModifyWidget(QWidget *parent, const QString &labelText, bool buttonEnabled)
	: Proxy(parent),
	  showLabel(new QLabel(this)),
	  modifyLabel(new LabelType(this)),
	  confirmButton(new QPushButton(this)),
	  layout(new QHBoxLayout(this))
{
	showLabel->setText(labelText);
	confirmButton->setEnabled(buttonEnabled);
	confirmButton->setText("Modify");

	layout->addWidget(showLabel, 0, Qt::AlignBottom);
	layout->addWidget(modifyLabel, 0, Qt::AlignBottom);
	layout->addWidget(confirmButton, 0, Qt::AlignBottom);
	layout->setSpacing(0);
	layout->setMargin(0);
	setLabelReadOnly(!buttonEnabled);
	QObject::connect(confirmButton, &QPushButton::clicked, [this](){emit confirm();});
}

//explicit instantiation
/*template<>
void ShowModifyWidget<QLineEdit, QString>::confirm();

template<>
void ShowModifyWidget<QLabel, QPixmap>::confirm();
*/

template<>
void ShowModifyWidget<QLineEdit, QString>::setLabelReadOnly(bool readOnly);

template<>
void ShowModifyWidget<QLabel, QPixmap>::setLabelReadOnly(bool readOnly);

template<>
void ShowModifyWidget<QLineEdit, QString>::setData(QString data);

template<>
void ShowModifyWidget<QLabel, QPixmap>::setData(QPixmap data);

/*
template<typename LabelType, typename DataType>
void ShowModifyWidget<LabelType, DataType>::setData(DataType data)
{

}
*/


#endif // SHOWMODIFYWIDGET_H
