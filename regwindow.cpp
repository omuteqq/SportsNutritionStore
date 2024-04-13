#include "regwindow.h"
#include "authwindow.h"
#include "ui_regwindow.h"
#include "usermanager.h"
#include "QMessageBox"

RegWindow::RegWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegWindow)
{
    ui->setupUi(this);
}

RegWindow::~RegWindow()
{
    delete ui;
}



void RegWindow::on_backToSignInButton_clicked()
{
    AuthWindow *authWindow = new AuthWindow(this);
    authWindow->setWindowTitle("Авторизация");
    this->close();
    authWindow->setModal(true);
    authWindow->exec();
}


void RegWindow::on_createAccButton_clicked()
{

    QString firstName = ui->name->text();
    QString lastName = ui->surname->text();
    QString patronymic = ui->patronymic->text();
    QString login = ui->login->text();
    QString password = ui->password->text();
    QString confirmPassword = ui->confirmPassword->text();

    if(userManager.isEmptyLineEdits(firstName, lastName, patronymic, login, password, confirmPassword)){
        QMessageBox::warning(this, "Регистрация", "Введите все поля!");
    }else{
        if(userManager.isValidPassword(password, confirmPassword)){
            QMessageBox::warning(this, "Регистрация", "Пароли не совпадают!");
        }else{
        if(userManager.isValidLogin(login)){
            QMessageBox::warning(this, "Регистрация", "Данный логин уже занят!");
    }else{
        if (userManager.registerUser(firstName, lastName, patronymic, login, password, confirmPassword)) {
            // Регистрация успешна
            AuthWindow *authWindow = new AuthWindow(this);
            QMessageBox::information(this, "Регистрация", "Вы успешно создали аккаунт!");
            this->close();
            authWindow->setModal(true);
            authWindow->exec();
        } else {
            // Ошибка регистрации
            QMessageBox::warning(this, "Регистрация", "Поля не должны содержать пробелы!");
                }
            }
        }
    }

}

