/********************************************************************************
** Form generated from reading UI file 'authwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHWINDOW_H
#define UI_AUTHWINDOW_H

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

class Ui_AuthWindow
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *signInLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLineEdit *password;
    QPushButton *signLikeAdminButton;
    QLineEdit *login;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *AuthWindow)
    {
        if (AuthWindow->objectName().isEmpty())
            AuthWindow->setObjectName("AuthWindow");
        AuthWindow->resize(800, 600);
        gridLayout = new QGridLayout(AuthWindow);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 130, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(170, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        groupBox = new QGroupBox(AuthWindow);
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
        gridLayout_2->setVerticalSpacing(20);
        gridLayout_2->setContentsMargins(40, -1, 40, 25);
        signInLabel = new QLabel(groupBox);
        signInLabel->setObjectName("signInLabel");
        signInLabel->setEnabled(true);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Roboto Slab")});
        font1.setPointSize(19);
        font1.setBold(false);
        signInLabel->setFont(font1);
        signInLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        signInLabel->setTextFormat(Qt::AutoText);
        signInLabel->setAlignment(Qt::AlignCenter);
        signInLabel->setWordWrap(false);

        gridLayout_2->addWidget(signInLabel, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(20, 20, 20, 15);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Roboto Slab")});
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 18px;"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 18px;"));

        horizontalLayout->addWidget(pushButton);


        gridLayout_2->addLayout(horizontalLayout, 4, 0, 2, 1);

        password = new QLineEdit(groupBox);
        password->setObjectName("password");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(password->sizePolicy().hasHeightForWidth());
        password->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Roboto Slab")});
        font3.setPointSize(10);
        font3.setBold(false);
        password->setFont(font3);
        password->setFocusPolicy(Qt::StrongFocus);
        password->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 18px;\n"
"padding-left: 10px;"));
        password->setFrame(false);
        password->setEchoMode(QLineEdit::Password);
        password->setClearButtonEnabled(true);

        gridLayout_2->addWidget(password, 3, 0, 1, 1);

        signLikeAdminButton = new QPushButton(groupBox);
        signLikeAdminButton->setObjectName("signLikeAdminButton");
        signLikeAdminButton->setFont(font2);
        signLikeAdminButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(signLikeAdminButton, 6, 0, 1, 1);

        login = new QLineEdit(groupBox);
        login->setObjectName("login");
        login->setEnabled(true);
        sizePolicy1.setHeightForWidth(login->sizePolicy().hasHeightForWidth());
        login->setSizePolicy(sizePolicy1);
        login->setFont(font3);
        login->setFocusPolicy(Qt::StrongFocus);
        login->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 18px;\n"
"padding-left: 10px;"));
        login->setFrame(false);
        login->setReadOnly(false);
        login->setClearButtonEnabled(true);

        gridLayout_2->addWidget(login, 2, 0, 1, 1);


        gridLayout->addWidget(groupBox, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(170, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 130, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);

        QWidget::setTabOrder(login, password);
        QWidget::setTabOrder(password, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton);
        QWidget::setTabOrder(pushButton, signLikeAdminButton);

        retranslateUi(AuthWindow);

        QMetaObject::connectSlotsByName(AuthWindow);
    } // setupUi

    void retranslateUi(QDialog *AuthWindow)
    {
        AuthWindow->setWindowTitle(QCoreApplication::translate("AuthWindow", "Dialog", nullptr));
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
        signInLabel->setText(QCoreApplication::translate("AuthWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AuthWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("AuthWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\260\320\272\320\272\320\260\321\203\320\275\321\202", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("AuthWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        signLikeAdminButton->setText(QCoreApplication::translate("AuthWindow", "\320\222\320\276\320\271\321\202\320\270 \320\272\320\260\320\272 \320\260\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200", nullptr));
        login->setPlaceholderText(QCoreApplication::translate("AuthWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AuthWindow: public Ui_AuthWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHWINDOW_H
