#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    QString login = ui->login->text();
    QString password = ui->password->text();

    if(login == "omuteqq" && password == "123123"){
        QMessageBox::information(this,"Авторизация", "Вы успешно вошли в систему");
    }else{
        QMessageBox::warning(this,"Авторизация", "Вы не вошли в систему");
    }

}

