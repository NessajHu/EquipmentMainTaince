#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "tabwidget.h"

class MainWindow : public QWidget
{
    Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
	static const QTabWidget::TabPosition westTabPosition = QTabWidget::West;
	static const QTabWidget::TabPosition northTabPosition = QTabWidget::North;
	TabWidget<westTabPosition> *tabWidget;
	TabWidget<northTabPosition> *basicInformation;
	TabWidget<northTabPosition> *equipmentInformation;
	TabWidget<northTabPosition> *equipmentMainTaince;
};

#endif // MAINWINDOW_H
