#ifndef SEARCHWIDGET_H
#define SEARCHWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QTableView>
#include <QGridLayout>
#include <QStringList>
#include <QSqlTableModel>
#include <QSqlRecord>

class SearchWidget : public QWidget
{
	Q_OBJECT
public:
	explicit SearchWidget(QWidget *parent = nullptr);
	void setLabels(QStringList labels);
	void setPlaceholderText(QString placeholderText);
	QSqlTableModel *getModel() const;
	void setModel(QSqlTableModel *value);
	QTableView *getView();
private:
	QLineEdit *searchBar = new QLineEdit(this);
	QPushButton *searchButton = new QPushButton(this);
	QPushButton *refreshButton = new QPushButton(this);
	QTableView *table = new QTableView(this);
	QGridLayout *layout = new QGridLayout(this);
	QSqlTableModel *model = new QSqlTableModel(this);
signals:
	void itemDoubleClicked(QSqlRecord item);
};

#endif // SEARCHWIDGET_H
