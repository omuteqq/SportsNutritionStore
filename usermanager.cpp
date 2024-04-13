#include "usermanager.h"
#include <QJsonDocument>
#include <QFile>
#include "QJsonArray"
#include "QMessageBox"
#include "QCryptographicHash"

UserManager::UserManager() {
    loadUsers();
}

bool UserManager::registerUser(const QString& firstName, const QString& lastName, const QString& patronymic, const QString& login, QString& password, const QString& confirmPassword) {
    if(login.contains(" ") || password.contains(" ") || firstName.contains(" ") || lastName.contains(" ") || patronymic.contains(" ") || confirmPassword.contains(" ")){
        return false;
    }
    QJsonObject newUser;
    QByteArray hashPassword = password.toUtf8();
    hashPassword = QCryptographicHash::hash(hashPassword, QCryptographicHash::Sha256);
    password = QString(hashPassword);
    newUser["firstName"] = firstName;
    newUser["lastName"] = lastName;
    newUser["patronymic"] = patronymic;
    newUser["login"] = login;
    newUser["password"] = password;
    newUser["role"] = false;
    users.append(newUser);
    return saveUsers();
}

bool UserManager::authenticateUser(const QString& login, QString& password) {
    QByteArray hashPassword = password.toUtf8();
    hashPassword = QCryptographicHash::hash(hashPassword, QCryptographicHash::Sha256);
    password = QString(hashPassword);
    for (const QJsonObject& user : users) {
        if (user["login"].toString() == login && user["password"].toString() == password && user["role"] == false) {
            return true;
        }
    }
    return false;
}

bool UserManager::isEmptyLineEdits(const QString& firstName, const QString& lastName, const QString& patronymic, const QString& login, const QString& password, const QString& confirmPassword){
    return (login.isEmpty() || firstName.isEmpty() || lastName.isEmpty() || password.isEmpty() || confirmPassword.isEmpty() || patronymic.isEmpty());
}

bool UserManager::isEmptyLineEdits(const QString& login, const QString& password){
    return (login.isEmpty() || password.isEmpty());
}

bool UserManager::isValidLogin(const QString& login){
    for (const auto& user : users) {
        if (user["login"].toString() == login) {
            return true; // Пользователь с таким логином уже существует
        }
    }
    return false;
}

bool UserManager::isValidPassword(const QString& password, const QString& confirmPassword){
    return (password != confirmPassword);
}

bool UserManager::loadUsers() {
    QFile file("accounts.json");
    if (!file.open(QIODevice::ReadOnly)) {
        return false;
    }

    QByteArray jsonData = file.readAll();
    QJsonDocument doc(QJsonDocument::fromJson(jsonData));

    if (!doc.isArray()) {
        file.close();
        return false;
    }

    QJsonArray jsonArray = doc.array();

    for (const QJsonValue& value : jsonArray) {
        if (value.isObject()) {
            users.push_back(value.toObject());
        }
    }

    file.close();
    return true;
}


bool UserManager::saveUsers() {
    QFile file("accounts.json");
    if (!file.open(QIODevice::WriteOnly)) {
        return false;
    }

    QJsonArray jsonArray;
    for (const auto& user : users) {
        jsonArray.append(user);
    }

    QJsonDocument doc(jsonArray);
    file.write(doc.toJson());
    file.close();
    return true;
}

bool UserManager::authenticateAdmin(const QString& login, QString& password) {
    QByteArray hashPassword = password.toUtf8();
    hashPassword = QCryptographicHash::hash(hashPassword, QCryptographicHash::Sha256);
    password = QString(hashPassword);
    for (const QJsonObject& user : users) {
        if (user["login"].toString() == login && user["password"].toString() == password && user["role"] == true) {
            return true;
        }
    }
    return false;
}









