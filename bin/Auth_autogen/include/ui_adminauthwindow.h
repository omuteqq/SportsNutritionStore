/********************************************************************************
** Form generated from reading UI file 'adminauthwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINAUTHWINDOW_H
#define UI_ADMINAUTHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AdminAuthWindow
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *signAdminButton;
    QPushButton *cancelButton;
    QLineEdit *password;
    QLabel *signInLabel;
    QLineEdit *login;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *AdminAuthWindow)
    {
        if (AdminAuthWindow->objectName().isEmpty())
            AdminAuthWindow->setObjectName("AdminAuthWindow");
        AdminAuthWindow->resize(800, 600);
        gridLayout = new QGridLayout(AdminAuthWindow);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 130, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(170, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        groupBox = new QGroupBox(AdminAuthWindow);
        groupBox->setObjectName("groupBox");
        groupBox->setEnabled(true);
        QFont font;
        font.setBold(false);
        groupBox->setFont(font);
        groupBox->setFocusPolicy(Qt::NoFocus);
        groupBox->setToolTipDuration(-1);
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(28,138,219);\n"
"border-radius: 24px solid;"));
        groupBox->setTitle(QString::fromUtf8(""));
        groupBox->setAlignment(Qt::AlignCenter);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setVerticalSpacing(25);
        gridLayout_2->setContentsMargins(40, -1, 40, 25);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(20, 20, 20, 20);
        signAdminButton = new QPushButton(groupBox);
        signAdminButton->setObjectName("signAdminButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(signAdminButton->sizePolicy().hasHeightForWidth());
        signAdminButton->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Roboto Slab")});
        signAdminButton->setFont(font1);
        signAdminButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 18px;"));

        horizontalLayout->addWidget(signAdminButton);

        cancelButton = new QPushButton(groupBox);
        cancelButton->setObjectName("cancelButton");
        sizePolicy.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy);
        cancelButton->setFont(font1);
        cancelButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 18px;"));

        horizontalLayout->addWidget(cancelButton);


        gridLayout_2->addLayout(horizontalLayout, 4, 0, 2, 1);

        password = new QLineEdit(groupBox);
        password->setObjectName("password");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(password->sizePolicy().hasHeightForWidth());
        password->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Roboto Slab")});
        font2.setPointSize(10);
        font2.setBold(false);
        password->setFont(font2);
        password->setFocusPolicy(Qt::StrongFocus);
        password->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 18px;\n"
"padding-left: 10px;"));
        password->setFrame(false);
        password->setEchoMode(QLineEdit::Password);
        password->setClearButtonEnabled(true);

        gridLayout_2->addWidget(password, 3, 0, 1, 1);

        signInLabel = new QLabel(groupBox);
        signInLabel->setObjectName("signInLabel");
        signInLabel->setEnabled(true);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Roboto Slab")});
        font3.setPointSize(19);
        font3.setBold(false);
        signInLabel->setFont(font3);
        signInLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        signInLabel->setTextFormat(Qt::AutoText);
        signInLabel->setAlignment(Qt::AlignCenter);
        signInLabel->setWordWrap(false);

        gridLayout_2->addWidget(signInLabel, 0, 0, 1, 1);

        login = new QLineEdit(groupBox);
        login->setObjectName("login");
        login->setEnabled(true);
        sizePolicy1.setHeightForWidth(login->sizePolicy().hasHeightForWidth());
        login->setSizePolicy(sizePolicy1);
        login->setFont(font2);
        login->setFocusPolicy(Qt::StrongFocus);
        login->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 18px;\n"
"padding-left: 10px;"));
        login->setFrame(false);
        login->setReadOnly(false);
        login->setClearButtonEnabled(true);

        gridLayout_2->addWidget(login, 2, 0, 1, 1);


        gridLayout->addWidget(groupBox, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(170, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 130, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        QWidget::setTabOrder(login, password);
        QWidget::setTabOrder(password, signAdminButton);
        QWidget::setTabOrder(signAdminButton, cancelButton);

        retranslateUi(AdminAuthWindow);

        QMetaObject::connectSlotsByName(AdminAuthWindow);
    } // setupUi

    void retranslateUi(QDialog *AdminAuthWindow)
    {
        AdminAuthWindow->setWindowTitle(QCoreApplication::translate("AdminAuthWindow", "Dialog", nullptr));
#if QT_CONFIG(statustip)
        groupBox->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        groupBox->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        groupBox->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        groupBox->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        signAdminButton->setText(QCoreApplication::translate("AdminAuthWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        cancelButton->setText(QCoreApplication::translate("AdminAuthWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("AdminAuthWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        signInLabel->setText(QCoreApplication::translate("AdminAuthWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        login->setPlaceholderText(QCoreApplication::translate("AdminAuthWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminAuthWindow: public Ui_AdminAuthWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINAUTHWINDOW_H
