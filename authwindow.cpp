#include "authwindow.h"
#include "ui_authwindow.h"
#include "QMessageBox"
#include "usermanager.h"
#include "regwindow.h"
#include "mainwindow.h"
#include "adminauthwindow.h"

AuthWindow::AuthWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AuthWindow)
{
    ui->setupUi(this);
}

AuthWindow::~AuthWindow()
{
    delete ui;
}

// Войти в аккаунт
void AuthWindow::on_pushButton_2_clicked()
{
    QString login = ui->login->text();
    QString password = ui->password->text();
    MainWindow* mainWindow = new MainWindow(this);
    if(userManager.isEmptyLineEdits(login, password)){
        QMessageBox::warning(this, "Авторизация", "Введите все поля!");
    }else{
        if (userManager.authenticateUser(login, password)) {
            // Аутентификация успешна
            mainWindow->setWindowTitle("Каталог товаров");
            mainWindow->show();
            this->hide();
        }
        else {
            // Ошибка аутентификации
            QMessageBox::warning(this, "Авторизация", "Неправильный логин или пароль!");
        }
    }

}

// Создать аккаунт
void AuthWindow::on_pushButton_clicked()
{
    RegWindow* registerWindow = new RegWindow(this);
    registerWindow->setWindowTitle("Регистрация");
    this->close();
    registerWindow->setModal(true);
    registerWindow->exec();
}


void AuthWindow::on_signLikeAdminButton_clicked()
{
    AdminAuthWindow* adminAuthWindow = new AdminAuthWindow(this);
    adminAuthWindow->setWindowTitle("Авторизация администратора");
    this->close();
    adminAuthWindow->setModal(true);
    adminAuthWindow->exec();
}

