#include "adminauthwindow.h"
#include "ui_adminauthwindow.h"
#include "authwindow.h"
#include "mainwindow.h"
#include "usermanager.h"
#include "QMessageBox"

AdminAuthWindow::AdminAuthWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AdminAuthWindow)
{
    ui->setupUi(this);
}

AdminAuthWindow::~AdminAuthWindow()
{
    delete ui;
}

void AdminAuthWindow::on_cancelButton_clicked()
{
    AuthWindow* authWindow = new AuthWindow(this);
    authWindow->setWindowTitle("Авторизация");
    this->close();
    authWindow->setModal(true);
    authWindow->exec();
}




void AdminAuthWindow::on_signAdminButton_clicked()
{
    QString login = ui->login->text();
    QString password = ui->password->text();
    MainWindow* mainWindow = new MainWindow(this);
    if(userManager.isEmptyLineEdits(login, password)){
        QMessageBox::warning(this, "Авторизация", "Введите все поля!");
    }else{
        if (userManager.authenticateAdmin(login, password)) {
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

