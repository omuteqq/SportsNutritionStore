#ifndef USERMANAGER_H
#define USERMANAGER_H

#include "QJsonObject"
#include <QString>
#include <QVector>

class UserManager
{
public:
    UserManager();
    bool registerUser(const QString& firstName, const QString& lastName, const QString& patronymic, const QString& login, QString& password, const QString& confirmPassword);
    bool authenticateUser(const QString& login, QString& password);
    bool isEmptyLineEdits(const QString& firstName, const QString& lastName, const QString& patronymic, const QString& login, const QString& password, const QString& confirmPassword);
    bool isEmptyLineEdits(const QString& login, const QString& password);
    bool isValidLogin(const QString& login);
    bool isValidPassword(const QString& password, const QString& confirmPassword);
    bool authenticateAdmin(const QString& login, QString& password);
private:
    QVector<QJsonObject> users;
    bool loadUsers();
    bool saveUsers();

};

#endif // USERMANAGER_H
