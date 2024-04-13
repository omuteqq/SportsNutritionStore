#include "productinfo.h"
#include "ui_productinfo.h"
#include "productmanager.h"
#include "QStyledItemDelegate"
#include "QStandardItemModel"

ProductInfo::ProductInfo(const QModelIndex& index, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ProductInfo)
{
    ui->setupUi(this);

    this->setFixedSize(300, 450);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->verticalHeader()->setVisible(false);
    ProductManager productManager;
    QVector<QJsonObject> array = productManager.getProducts();
    QJsonObject product = array[index.row()];
    ui->nameLabel->setText(product["productName"].toString());
    ui->recomendationLabel->setText(QString("\n  Рекомендации к применению: %1\n\n  Добавляй товар в корзину всего за %2 BYN").arg(product["recommendations"].toString()).arg(product["price"].toDouble()));
    ui->descriptionLabel->setText(QString("\n  Описание: %1. Вес товара: %2 грамм").arg(product["productDescription"].toString()).arg(product["weight"].toInt()));
    QStandardItemModel *model = new QStandardItemModel(1, 3, this); // Создаем модель с количеством строк, равным размеру вектора продуктов

    model->setHorizontalHeaderLabels({ "Белки", "Жиры", "Углеводы"}); // Устанавливаем заголовки столбцов

        // Устанавливаем данные о продукте в каждую ячейку соответствующего столбца
        model->setData(model->index(0, 0), product["composition"].toObject()["protein"].toDouble());
        model->setData(model->index(0, 1), product["composition"].toObject()["fats"].toDouble());
        model->setData(model->index(0, 2), product["composition"].toObject()["carbohydrate"].toDouble());

    // Установка модели данных для QTableView
    ui->tableView->setModel(model);
    ui->tableView->verticalHeader()->resizeSection(model->rowCount() - 1, 0);

    // Включаем растягивание последней строки
    ui->tableView->verticalHeader()->setStretchLastSection(true);
    // Обновление представления
    ui->tableView->update();
}

ProductInfo::~ProductInfo()
{
    delete ui;
}
