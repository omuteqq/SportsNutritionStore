#ifndef PRODUCTMANAGER_H
#define PRODUCTMANAGER_H

#include <QObject>
#include <QVector>
#include <QJsonObject>

class ProductManager
{
public:
    ProductManager();

    bool loadProducts();
    bool saveProducts() const;

    const QVector<QJsonObject>& getProducts() const { return products; }

private:
    QVector<QJsonObject> products;
};

#endif // PRODUCTMANAGER_H
