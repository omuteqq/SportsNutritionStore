#include "productmanager.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>

ProductManager::ProductManager(){
    loadProducts();
}

bool ProductManager::loadProducts()
{
    QFile file("products.json");
    if (!file.open(QIODevice::ReadOnly)) {
        return false;
    }

    QByteArray jsonData = file.readAll();
    file.close();

    QJsonDocument doc(QJsonDocument::fromJson(jsonData));
    if (!doc.isArray()) {
        return false;
    }

    products.clear();
    QJsonArray jsonArray = doc.array();
    for (const QJsonValue &value : jsonArray) {
        if (value.isObject()) {
            products.append(value.toObject());
        }
    }

    return true;
}

bool ProductManager::saveProducts() const
{
    QFile file("products.json");
    if (!file.open(QIODevice::WriteOnly)) {
        return false;
    }

    QJsonArray jsonArray;
    for (const auto &product : products) {
        jsonArray.append(product);
    }

    QJsonDocument doc(jsonArray);
    file.write(doc.toJson());
    file.close();
    return true;
}
