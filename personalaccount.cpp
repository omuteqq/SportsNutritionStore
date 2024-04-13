#include "personalaccount.h"
#include "ui_personalaccount.h"

PersonalAccount::PersonalAccount(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PersonalAccount)
{
    ui->setupUi(this);
}

PersonalAccount::~PersonalAccount()
{
    delete ui;
}
