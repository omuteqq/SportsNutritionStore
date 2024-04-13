/********************************************************************************
** Form generated from reading UI file 'productinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTINFO_H
#define UI_PRODUCTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ProductInfo
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *nameLabel;
    QLabel *descriptionLabel;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_3;
    QLabel *recomendationLabel;
    QLabel *label;

    void setupUi(QDialog *ProductInfo)
    {
        if (ProductInfo->objectName().isEmpty())
            ProductInfo->setObjectName("ProductInfo");
        ProductInfo->resize(300, 450);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ProductInfo->sizePolicy().hasHeightForWidth());
        ProductInfo->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(ProductInfo);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setVerticalSpacing(0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        nameLabel = new QLabel(ProductInfo);
        nameLabel->setObjectName("nameLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nameLabel->sizePolicy().hasHeightForWidth());
        nameLabel->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Roboto Slab")});
        font.setPointSize(13);
        nameLabel->setFont(font);
        nameLabel->setTextFormat(Qt::AutoText);
        nameLabel->setAlignment(Qt::AlignCenter);
        nameLabel->setWordWrap(true);

        verticalLayout_2->addWidget(nameLabel);

        descriptionLabel = new QLabel(ProductInfo);
        descriptionLabel->setObjectName("descriptionLabel");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(descriptionLabel->sizePolicy().hasHeightForWidth());
        descriptionLabel->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Roboto Slab")});
        font1.setPointSize(10);
        descriptionLabel->setFont(font1);
        descriptionLabel->setWordWrap(true);

        verticalLayout_2->addWidget(descriptionLabel);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(25);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(15, 0, 15, 10);
        tableView = new QTableView(ProductInfo);
        tableView->setObjectName("tableView");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Ignored);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy3);
        tableView->setFont(font1);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout->addWidget(tableView);

        pushButton = new QPushButton(ProductInfo);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy4);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Roboto Slab")});
        font2.setPointSize(9);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(28,138,219);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 18px;"));

        verticalLayout->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout, 5, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        recomendationLabel = new QLabel(ProductInfo);
        recomendationLabel->setObjectName("recomendationLabel");
        recomendationLabel->setFont(font1);
        recomendationLabel->setWordWrap(true);

        verticalLayout_3->addWidget(recomendationLabel);

        label = new QLabel(ProductInfo);
        label->setObjectName("label");
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        verticalLayout_3->addWidget(label);


        gridLayout->addLayout(verticalLayout_3, 2, 0, 1, 1);


        retranslateUi(ProductInfo);

        QMetaObject::connectSlotsByName(ProductInfo);
    } // setupUi

    void retranslateUi(QDialog *ProductInfo)
    {
        ProductInfo->setWindowTitle(QCoreApplication::translate("ProductInfo", "Dialog", nullptr));
        nameLabel->setText(QCoreApplication::translate("ProductInfo", "TextLabel", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("ProductInfo", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("ProductInfo", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\202\320\276\320\262\320\260\321\200 \320\262 \320\272\320\276\321\200\320\267\320\270\320\275\321\203", nullptr));
        recomendationLabel->setText(QCoreApplication::translate("ProductInfo", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("ProductInfo", "\320\241\320\276\321\201\321\202\320\260\320\262 \321\202\320\276\320\262\320\260\321\200\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductInfo: public Ui_ProductInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTINFO_H
