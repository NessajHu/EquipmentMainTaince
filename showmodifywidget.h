#ifndef SHOWMODIFYWIDGET_H
#define SHOWMODIFYWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QPixmap>
#include "maintainceplan.h"
#include <QDateEdit>
#include <QComboBox>

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
	void setShowLabelText(QString text);
	LabelType* getModifyLabel();
	void setButtonVisible(bool visible);
	DataType getData();
	template<typename InitType = DataType>
	void init(InitType initValue);
	void setLabelReadOnly([[maybe_unused]]bool readOnly);
private:
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
	modifyLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
	layout->addWidget(showLabel, 0, Qt::AlignVCenter);
	layout->addWidget(modifyLabel, 0, Qt::AlignVCenter);
	layout->addWidget(confirmButton, 0, Qt::AlignVCenter);
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

template<typename LabelType, typename DataType>
void ShowModifyWidget<LabelType, DataType>::setShowLabelText(QString text)
{
	showLabel->setText(text);
}
template<typename LabelType, typename DataType>
void ShowModifyWidget<LabelType, DataType>::setLabelReadOnly(bool readOnly)
{
	modifyLabel->setEnabled(readOnly);
}

template<typename LabelType, typename DataType>
void ShowModifyWidget<LabelType, DataType>::setData(DataType data)
{
	modifyLabel->setText(data);
}

template<typename LabelType, typename DataType>
template<typename InitType>
void ShowModifyWidget<LabelType, DataType>::init(InitType initValue)
{
	setText(initValue);
}

template<>
template<>
void ShowModifyWidget<QLabel, QPixmap>::init(QPixmap initValue);

template<>
template<>
void ShowModifyWidget<QComboBox, QString>::init(QStringList& initValue);

template<typename LabelType, typename DataType>
LabelType* ShowModifyWidget<LabelType, DataType>::getModifyLabel()
{
	return modifyLabel;
}

template<typename LabelType, typename DataType>
void ShowModifyWidget<LabelType, DataType>::setButtonVisible(bool visible)
{
	confirmButton->setVisible(visible);
}

template<>
void ShowModifyWidget<QDateEdit, QDate>::setLabelReadOnly(bool readOnly);

template<>
void ShowModifyWidget<QLabel, QPixmap>::setLabelReadOnly(bool readOnly);

template<>
void ShowModifyWidget<QLabel, QPixmap>::setData(QPixmap data);

/*
template<typename LabelType, typename DataType>
void ShowModifyWidget<LabelType, DataType>::setData(DataType data)
{

}
*/


#endif // SHOWMODIFYWIDGET_H
