#ifndef TABWIDGET_H
#define TABWIDGET_H

#include <QTabWidget>

template <QTabWidget::TabPosition tabPos>
class TabWidget : public QTabWidget
{
public:
	explicit TabWidget(QWidget *parent = nullptr)
		: QTabWidget(parent)
	{
		setTabPosition(tabPos);
	}

};

#endif // TABWIDGET_H
