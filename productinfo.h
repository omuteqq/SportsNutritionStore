#ifndef PRODUCTINFO_H
#define PRODUCTINFO_H

#include <QDialog>

namespace Ui {
class ProductInfo;
}

class ProductInfo : public QDialog
{
    Q_OBJECT

public:
    explicit ProductInfo(const QModelIndex &index,QWidget *parent = nullptr);
    ~ProductInfo();

private:
    Ui::ProductInfo *ui;
};

#endif // PRODUCTINFO_H
