#include "login.h"
#include "QCryptographicHash"

Login::Login(QWidget *parent)
	: QWidget(parent),
	  userLabel(new QLabel(this)),
	  passwordLabel(new QLabel(this)),
	  userLineEdit(new QLineEdit(this)),
	  passwordLineEdit(new QLineEdit(this)),
	  loginButton(new QPushButton(this)),
	  layout(new QGridLayout(this))
{
	setWindowTitle("Administrator Login in");
	userLabel->setText("User Name");
	passwordLabel->setText("Password");
	loginButton->setText("Login in");
	passwordLineEdit->setEchoMode(QLineEdit::Password);
	layout->addWidget(userLabel, 0, 0, 1, 1);
	layout->addWidget(userLineEdit, 0, 1, 1, 2);
	layout->addWidget(passwordLabel, 1, 0, 1, 1);
	layout->addWidget(passwordLineEdit, 1, 1, 1, 2);
	layout->addWidget(loginButton, 2, 0, 1, 3);
}

void Login::loginButtonClicked()
{

}
