#include "showmodifywidget.h"
/*
template<typename LabelType, typename DataType>
ShowModifyWidget<LabelType, DataType>::ShowModifyWidget(QWidget *parent, const QString &labelText, bool buttonEnabled)
	: QWidget(parent),
	  showLabel(new QLabel(this)),
	  modifyLabel(new LabelType(this)),
	  confirmButton(new QPushButton(this)),
	  layout(new QHBoxLayout(this))
{
	showLabel->setText(labelText);
	confirmButton->setEnabled(buttonEnabled);
	confirmButton->setText("Modify");
	layout->addWidget(showLabel);
	layout->addWidget(modifyLabel);
	layout->addWidget(confirmButton);
	layout->setSpacing(0);
	layout->setMargin(0);
}


template<typename LabelType, typename DataType>
void ShowModifyWidget<LabelType, DataType>::setData(DataType data)
{
	if(std::is_same_v<LabelType, QLineEdit> && std::is_convertible_v<data, QString>)
	{
		modifyLabel->setText(data);
	}
	else if(std::is_same_v<LabelType, QLabel> && std::is_convertible_v<data, QPixmap>)
	{
		modifyLabel->setPixmap(data);
	}
}
*/

template<>
void ShowModifyWidget<QLineEdit, QString>::setLabelReadOnly(bool readOnly)
{
	modifyLabel->setReadOnly(readOnly);
}

template<>
void ShowModifyWidget<QLabel, QPixmap>::setLabelReadOnly([[maybe_unused]]bool readOnly)
{

}

template<>
void ShowModifyWidget<QLineEdit, QString>::setData(QString data)
{
	modifyLabel->setText(data);
}

template<>
void ShowModifyWidget<QLabel, QPixmap>::setData(QPixmap data)
{
	modifyLabel->setPixmap(data);
}

