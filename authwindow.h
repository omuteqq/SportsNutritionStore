#ifndef AUTHWINDOW_H
#define AUTHWINDOW_H

#include <QDialog>
#include "QFile"
#include "QJsonArray"
#include "QJsonObject"
#include "QFileDialog"
#include "QJsonParseError"
#include "usermanager.h"

namespace Ui {
class AuthWindow;
}

class AuthWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AuthWindow(QWidget *parent = nullptr);
    ~AuthWindow();



private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_signLikeAdminButton_clicked();

private:
    Ui::AuthWindow *ui;
    UserManager userManager;
};

#endif // AUTHWINDOW_H
