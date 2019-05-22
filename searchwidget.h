#ifndef SEARCHWIDGET_H
#define SEARCHWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QTableWidget>
#include <QGridLayout>
#include <QStringList>

class SearchWidget : public QWidget
{
	Q_OBJECT
public:
	explicit SearchWidget(QWidget *parent = nullptr);
	void setLabels(QStringList labels);
	void setPlaceholderText(QString placeholderText);
private:
	QLineEdit *searchBar;
	QPushButton *searchButton;
	QPushButton *refreshButton;
	QTableWidget *table;
	QGridLayout *layout;
signals:
	void itemDoubleClicked(QTableWidgetItem *item);
};

#endif // SEARCHWIDGET_H
