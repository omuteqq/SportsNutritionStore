/********************************************************************************
** Form generated from reading UI file 'personalaccount.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONALACCOUNT_H
#define UI_PERSONALACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_PersonalAccount
{
public:

    void setupUi(QDialog *PersonalAccount)
    {
        if (PersonalAccount->objectName().isEmpty())
            PersonalAccount->setObjectName("PersonalAccount");
        PersonalAccount->resize(800, 600);

        retranslateUi(PersonalAccount);

        QMetaObject::connectSlotsByName(PersonalAccount);
    } // setupUi

    void retranslateUi(QDialog *PersonalAccount)
    {
        PersonalAccount->setWindowTitle(QCoreApplication::translate("PersonalAccount", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PersonalAccount: public Ui_PersonalAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONALACCOUNT_H
