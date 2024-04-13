/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QTableView *tableView;
    QLabel *signInLabel_2;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *personalAccButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setDocumentMode(false);
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(137, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setEnabled(true);
        QFont font;
        font.setBold(false);
        groupBox_2->setFont(font);
        groupBox_2->setFocusPolicy(Qt::NoFocus);
        groupBox_2->setToolTipDuration(-1);
        groupBox_2->setAutoFillBackground(false);
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(28,138,219);\n"
"border-radius: 24px solid;"));
        groupBox_2->setTitle(QString::fromUtf8(""));
        groupBox_2->setAlignment(Qt::AlignCenter);
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(false);
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setVerticalSpacing(20);
        gridLayout_2->setContentsMargins(40, -1, 40, 25);
        tableView = new QTableView(groupBox_2);
        tableView->setObjectName("tableView");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Roboto Slab")});
        tableView->setFont(font1);
        tableView->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSelectionMode(QAbstractItemView::NoSelection);

        gridLayout_2->addWidget(tableView, 2, 0, 1, 1);

        signInLabel_2 = new QLabel(groupBox_2);
        signInLabel_2->setObjectName("signInLabel_2");
        signInLabel_2->setEnabled(true);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Roboto Slab")});
        font2.setPointSize(19);
        font2.setBold(false);
        signInLabel_2->setFont(font2);
        signInLabel_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        signInLabel_2->setTextFormat(Qt::AutoText);
        signInLabel_2->setAlignment(Qt::AlignCenter);
        signInLabel_2->setWordWrap(false);

        gridLayout_2->addWidget(signInLabel_2, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(72);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        comboBox = new QComboBox(groupBox_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border: 2px solid transparent; /* \320\250\320\270\321\200\320\270\320\275\320\260 \320\270 \321\206\320\262\320\265\321\202 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    border-radius: 4px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"    padding: 1px 18px 1px 3px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\272\320\276\320\274\320\261\320\276-\320\261\320\276\320\272\321\201\320\260 */\n"
"    background-color: #FFFFFF; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"    color: #000000; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"QComboBox QAbstractItemView {\n"
"    border: 2px solid transparent; /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 \320\262\321\213\320\277\320\260\320\264\320\260\321\216\321\211\320\265"
                        "\320\263\320\276 \321\201\320\277\320\270\321\201\320\272\320\260 */\n"
"    background-color: #FFFFFF; /* \320\221\320\265\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"}\n"
"\n"
""));

        horizontalLayout_3->addWidget(comboBox);

        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border: 2px solid transparent; /* \320\250\320\270\321\200\320\270\320\275\320\260 \320\270 \321\206\320\262\320\265\321\202 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 */\n"
"    border-radius: 4px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"    padding: 1px 18px 1px 3px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\272\320\276\320\274\320\261\320\276-\320\261\320\276\320\272\321\201\320\260 */\n"
"    background-color: #FFFFFF; /* \320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"    color: #000000; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"QComboBox QAbstractItemView {\n"
"    border: 2px solid transparent; /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 \320\262\321\213\320\277\320\260\320\264\320\260\321\216\321\211\320\265"
                        "\320\263\320\276 \321\201\320\277\320\270\321\201\320\272\320\260 */\n"
"    background-color: #FFFFFF; /* \320\221\320\265\320\273\321\213\320\271 \321\204\320\276\320\275 */\n"
"}"));

        horizontalLayout_3->addWidget(comboBox_2);


        gridLayout_2->addLayout(horizontalLayout_3, 4, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(128, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        personalAccButton = new QPushButton(centralwidget);
        personalAccButton->setObjectName("personalAccButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(personalAccButton->sizePolicy().hasHeightForWidth());
        personalAccButton->setSizePolicy(sizePolicy);
        personalAccButton->setFont(font1);
        personalAccButton->setStyleSheet(QString::fromUtf8("background-color: rgb(28,138,219);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 18px;"));

        gridLayout->addWidget(personalAccButton, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(statustip)
        groupBox_2->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        groupBox_2->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        groupBox_2->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        groupBox_2->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        signInLabel_2->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\321\202\320\260\320\273\320\276\320\263 \321\202\320\276\320\262\320\260\321\200\320\276\320\262", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\272\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\216", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\202\320\265\320\270\320\275", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\273\320\260\320\263\320\265\320\275", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "\320\232\321\200\320\265\320\260\321\202\320\270\320\275", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "\320\220\320\274\320\270\320\275\320\276\320\272\320\270\321\201\320\273\320\276\321\202\321\213", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "\320\223\320\265\320\271\320\275\320\265\321\200\321\213", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "\320\236\321\202\321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\202\320\276\320\262\320\260\321\200\321\213", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "\320\237\320\276 \321\203\320\261\321\213\320\262\320\260\320\275\320\270\321\216 \321\206\320\265\320\275\321\213", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "\320\237\320\276 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\216 \321\206\320\265\320\275\321\213", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("MainWindow", "\320\237\320\276 \320\260\320\273\321\204\320\260\320\262\320\270\321\202\321\203", nullptr));

        personalAccButton->setText(QCoreApplication::translate("MainWindow", "\320\233\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\261\320\270\320\275\320\265\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
