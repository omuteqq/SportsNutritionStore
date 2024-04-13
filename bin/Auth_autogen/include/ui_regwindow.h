/********************************************************************************
** Form generated from reading UI file 'regwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGWINDOW_H
#define UI_REGWINDOW_H

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

class Ui_RegWindow
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *signInLabel;
    QLineEdit *surname;
    QLineEdit *name;
    QLineEdit *patronymic;
    QLineEdit *login;
    QLineEdit *password;
    QLineEdit *confirmPassword;
    QHBoxLayout *horizontalLayout;
    QPushButton *createAccButton;
    QPushButton *backToSignInButton;

    void setupUi(QDialog *RegWindow)
    {
        if (RegWindow->objectName().isEmpty())
            RegWindow->setObjectName("RegWindow");
        RegWindow->resize(800, 600);
        gridLayout = new QGridLayout(RegWindow);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 55, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(140, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(140, 206, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 55, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);

        groupBox = new QGroupBox(RegWindow);
        groupBox->setObjectName("groupBox");
        groupBox->setEnabled(true);
        QFont font;
        font.setBold(false);
        groupBox->setFont(font);
        groupBox->setFocusPolicy(Qt::NoFocus);
        groupBox->setToolTipDuration(-1);
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(28,138,219);\n"
"border-radius: 32px solid;"));
        groupBox->setTitle(QString::fromUtf8(""));
        groupBox->setAlignment(Qt::AlignCenter);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setVerticalSpacing(15);
        gridLayout_2->setContentsMargins(40, -1, 40, -1);
        signInLabel = new QLabel(groupBox);
        signInLabel->setObjectName("signInLabel");
        signInLabel->setEnabled(true);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Roboto Slab")});
        font1.setPointSize(18);
        font1.setBold(false);
        signInLabel->setFont(font1);
        signInLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        signInLabel->setTextFormat(Qt::AutoText);
        signInLabel->setAlignment(Qt::AlignCenter);
        signInLabel->setWordWrap(false);

        gridLayout_2->addWidget(signInLabel, 0, 0, 1, 1);

        surname = new QLineEdit(groupBox);
        surname->setObjectName("surname");
        surname->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(surname->sizePolicy().hasHeightForWidth());
        surname->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Roboto Slab")});
        font2.setPointSize(10);
        font2.setBold(false);
        surname->setFont(font2);
        surname->setFocusPolicy(Qt::StrongFocus);
        surname->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"padding-left: 10px;\n"
"border-radius: 18px;"));
        surname->setFrame(false);
        surname->setDragEnabled(false);
        surname->setReadOnly(false);
        surname->setClearButtonEnabled(true);

        gridLayout_2->addWidget(surname, 1, 0, 1, 1);

        name = new QLineEdit(groupBox);
        name->setObjectName("name");
        name->setEnabled(true);
        sizePolicy.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy);
        name->setFont(font2);
        name->setFocusPolicy(Qt::StrongFocus);
        name->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"padding-left: 10px;\n"
"border-radius: 18px;"));
        name->setFrame(false);
        name->setReadOnly(false);
        name->setClearButtonEnabled(true);

        gridLayout_2->addWidget(name, 2, 0, 1, 1);

        patronymic = new QLineEdit(groupBox);
        patronymic->setObjectName("patronymic");
        patronymic->setEnabled(true);
        sizePolicy.setHeightForWidth(patronymic->sizePolicy().hasHeightForWidth());
        patronymic->setSizePolicy(sizePolicy);
        patronymic->setFont(font2);
        patronymic->setFocusPolicy(Qt::StrongFocus);
        patronymic->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"padding-left: 10px;\n"
"border-radius: 18px;"));
        patronymic->setFrame(false);
        patronymic->setReadOnly(false);
        patronymic->setClearButtonEnabled(true);

        gridLayout_2->addWidget(patronymic, 3, 0, 1, 1);

        login = new QLineEdit(groupBox);
        login->setObjectName("login");
        sizePolicy.setHeightForWidth(login->sizePolicy().hasHeightForWidth());
        login->setSizePolicy(sizePolicy);
        login->setFont(font2);
        login->setFocusPolicy(Qt::StrongFocus);
        login->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"padding-left: 10px;\n"
"border-radius: 18px;"));
        login->setFrame(false);
        login->setEchoMode(QLineEdit::Normal);
        login->setClearButtonEnabled(true);

        gridLayout_2->addWidget(login, 4, 0, 1, 1);

        password = new QLineEdit(groupBox);
        password->setObjectName("password");
        password->setEnabled(true);
        sizePolicy.setHeightForWidth(password->sizePolicy().hasHeightForWidth());
        password->setSizePolicy(sizePolicy);
        password->setFont(font2);
        password->setFocusPolicy(Qt::StrongFocus);
        password->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"padding-left: 10px;\n"
"border-radius: 18px;"));
        password->setFrame(false);
        password->setEchoMode(QLineEdit::Password);
        password->setReadOnly(false);
        password->setClearButtonEnabled(true);

        gridLayout_2->addWidget(password, 5, 0, 1, 1);

        confirmPassword = new QLineEdit(groupBox);
        confirmPassword->setObjectName("confirmPassword");
        confirmPassword->setEnabled(true);
        sizePolicy.setHeightForWidth(confirmPassword->sizePolicy().hasHeightForWidth());
        confirmPassword->setSizePolicy(sizePolicy);
        confirmPassword->setFont(font2);
        confirmPassword->setFocusPolicy(Qt::StrongFocus);
        confirmPassword->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"padding-left: 10px;\n"
"border-radius: 18px;"));
        confirmPassword->setFrame(false);
        confirmPassword->setEchoMode(QLineEdit::Password);
        confirmPassword->setReadOnly(false);
        confirmPassword->setClearButtonEnabled(true);

        gridLayout_2->addWidget(confirmPassword, 6, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(35);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(25, 2, 25, 2);
        createAccButton = new QPushButton(groupBox);
        createAccButton->setObjectName("createAccButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(createAccButton->sizePolicy().hasHeightForWidth());
        createAccButton->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Roboto Slab")});
        font3.setBold(false);
        font3.setStyleStrategy(QFont::PreferDefault);
        createAccButton->setFont(font3);
        createAccButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 16px;"));
        createAccButton->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(createAccButton);

        backToSignInButton = new QPushButton(groupBox);
        backToSignInButton->setObjectName("backToSignInButton");
        backToSignInButton->setEnabled(true);
        sizePolicy1.setHeightForWidth(backToSignInButton->sizePolicy().hasHeightForWidth());
        backToSignInButton->setSizePolicy(sizePolicy1);
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Roboto Slab")});
        font4.setBold(false);
        backToSignInButton->setFont(font4);
        backToSignInButton->setAcceptDrops(false);
        backToSignInButton->setAutoFillBackground(false);
        backToSignInButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 16px;"));
        backToSignInButton->setCheckable(false);
        backToSignInButton->setAutoRepeat(false);
        backToSignInButton->setAutoExclusive(false);
        backToSignInButton->setAutoDefault(false);
        backToSignInButton->setFlat(false);

        horizontalLayout->addWidget(backToSignInButton);


        gridLayout_2->addLayout(horizontalLayout, 7, 0, 1, 1);

        name->raise();
        patronymic->raise();
        login->raise();
        password->raise();
        confirmPassword->raise();
        signInLabel->raise();
        surname->raise();

        gridLayout->addWidget(groupBox, 1, 1, 2, 1);


        retranslateUi(RegWindow);

        backToSignInButton->setDefault(false);


        QMetaObject::connectSlotsByName(RegWindow);
    } // setupUi

    void retranslateUi(QDialog *RegWindow)
    {
        RegWindow->setWindowTitle(QCoreApplication::translate("RegWindow", "Dialog", nullptr));
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
        signInLabel->setText(QCoreApplication::translate("RegWindow", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        surname->setPlaceholderText(QCoreApplication::translate("RegWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        name->setPlaceholderText(QCoreApplication::translate("RegWindow", "\320\230\320\274\321\217", nullptr));
        patronymic->setPlaceholderText(QCoreApplication::translate("RegWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        login->setPlaceholderText(QCoreApplication::translate("RegWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("RegWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        confirmPassword->setPlaceholderText(QCoreApplication::translate("RegWindow", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        createAccButton->setText(QCoreApplication::translate("RegWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\260\320\272\320\272\320\260\321\203\320\275\321\202", nullptr));
        backToSignInButton->setText(QCoreApplication::translate("RegWindow", "\320\222\320\276\320\271\321\202\320\270 \320\262 \320\260\320\272\320\272\320\260\321\203\320\275\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegWindow: public Ui_RegWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGWINDOW_H
