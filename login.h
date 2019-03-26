#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>

class Login : public QWidget
{
	Q_OBJECT
public:
	explicit Login(QWidget *parent = nullptr);
	QLabel *userLabel;
	QLabel *passwordLabel;
	QLineEdit *userLineEdit;
	QLineEdit *passwordLineEdit;
	QPushButton *loginButton;
	QGridLayout *layout;
signals:

public slots:
private slots:
	void loginButtonClicked();
};

#endif // LOGIN_H
