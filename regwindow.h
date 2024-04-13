#ifndef REGWINDOW_H
#define REGWINDOW_H

#include <QDialog>
#include "usermanager.h"
namespace Ui {
class RegWindow;
}

class RegWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RegWindow(QWidget *parent = nullptr);
    ~RegWindow();

private slots:

    void on_backToSignInButton_clicked();

    void on_createAccButton_clicked();

private:
    Ui::RegWindow *ui;
    UserManager userManager;
};

#endif // REGWINDOW_H
