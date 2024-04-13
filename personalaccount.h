#ifndef PERSONALACCOUNT_H
#define PERSONALACCOUNT_H

#include <QDialog>

namespace Ui {
class PersonalAccount;
}

class PersonalAccount : public QDialog
{
    Q_OBJECT

public:
    explicit PersonalAccount(QWidget *parent = nullptr);
    ~PersonalAccount();

private:
    Ui::PersonalAccount *ui;
};

#endif // PERSONALACCOUNT_H
