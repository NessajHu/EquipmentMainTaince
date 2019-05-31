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
void ShowModifyWidget<QDateEdit, QDate>::setLabelReadOnly(bool readOnly)
{
	modifyLabel->setEnabled(readOnly);
}

template<>
void ShowModifyWidget<QLabel, QPixmap>::setLabelReadOnly([[maybe_unused]]bool readOnly)
{

}

template<>
void ShowModifyWidget<QDateEdit, QDate>::setData(QDate data)
{
	modifyLabel->setDate(data);
}


template<>
void ShowModifyWidget<QLabel, QPixmap>::setData(QPixmap data)
{
	modifyLabel->setPixmap(data);
}

template<>
template<>
void ShowModifyWidget<QLabel, QPixmap>::init(QPixmap initValue)
{
	modifyLabel->setPixmap(initValue);
}

template<>
template<>
void ShowModifyWidget<QComboBox, QString>::init(QStringList& initValue)
{
	modifyLabel->addItems(initValue);
}

template<>
QString ShowModifyWidget<QLineEdit, QString>::getData()
{
	return modifyLabel->text();
}

template<>
QString ShowModifyWidget<QComboBox, QString>::getData()
{
	return modifyLabel->currentText();
}

template<>
QString ShowModifyWidget<QLabel, QPixmap>::getData()
{
	if(modifyLabel->pixmap() == nullptr)
		return QString("");
	return data;
}


template<>
void ShowModifyWidget<QComboBox, QString>::con()
{
	QObject::connect(confirmButton, &QPushButton::clicked, [this](){emit confirm(modifyLabel->currentText());});
}

template <>
void ShowModifyWidget<QLabel, QPixmap>::con()
{
	QObject::connect(confirmButton, &QPushButton::clicked, [this](){
		QString fileName = QFileDialog::getOpenFileName(this,
							   tr("Open Image"),".",tr("Image File (*.jpg *.png *.bmp)"));
		QSize picSize(200, 300);
		qDebug() << "filename";
		QPixmap pixmap(fileName);
		QPixmap scaledPixmap = pixmap.scaled(picSize);
		this->setData(scaledPixmap);
		data = fileName;
		qDebug() << fileName;
	});
}
template<>
void ShowModifyWidget<QDateEdit, QDate>::con()
{
	QObject::connect(confirmButton, &QPushButton::clicked, [this](){emit confirm(modifyLabel->date().toString());});
}
