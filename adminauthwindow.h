#ifndef ADMINAUTHWINDOW_H
#define ADMINAUTHWINDOW_H

#include <QDialog>
#include "usermanager.h"
namespace Ui {
class AdminAuthWindow;
}

class AdminAuthWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AdminAuthWindow(QWidget *parent = nullptr);
    ~AdminAuthWindow();

private slots:
    void on_cancelButton_clicked();

    void on_signAdminButton_clicked();

private:
    Ui::AdminAuthWindow *ui;
    UserManager userManager;
};

#endif // ADMINAUTHWINDOW_H
