#ifndef SEARCHWIDGET_H
#define SEARCHWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QTableWidget>
#include <QGridLayout>

class SearchWidget : public QWidget
{
	Q_OBJECT
public:
	explicit SearchWidget(QWidget *parent = nullptr);
private:
	QLineEdit *searchBar;
	QPushButton *searchButton;
	QPushButton *refreshButton;
	QTableWidget *table;
	QGridLayout *layout;
signals:
	void switchToOther();
};

#endif // SEARCHWIDGET_H
