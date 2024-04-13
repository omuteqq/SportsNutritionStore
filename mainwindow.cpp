#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QStandardItemModel"
#include "productmanager.h"
#include "QStyledItemDelegate"
#include "productinfo.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->comboBox->setCurrentIndex(0);
    ui->comboBox->setItemData(0, QVariant(Qt::ItemIsEnabled), Qt::UserRole - 1);
    ui->comboBox_2->setCurrentIndex(0);
    ui->comboBox_2->setItemData(0, QVariant(Qt::ItemIsEnabled), Qt::UserRole - 1);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ProductManager productManager;

    QVector<QJsonObject> array = productManager.getProducts(); // Получаем вектор товаров

    QStandardItemModel *model = new QStandardItemModel(array.size(), 3, this); // Создаем модель с количеством строк, равным размеру вектора продуктов

    model->setHorizontalHeaderLabels({ "Название", "Категория", "Цена" }); // Устанавливаем заголовки столбцов

    for (int row = 0; row < array.size(); ++row) {
        QJsonObject product = array[row]; // Получаем текущий продукт из вектора

        // Устанавливаем данные о продукте в каждую ячейку соответствующего столбца
        model->setData(model->index(row, 0), product["productName"].toString());
        model->setData(model->index(row, 1), product["productCategory"].toString());
        model->setData(model->index(row, 2), product["price"].toDouble());
    }

    // Установка модели данных для QTableView
    ui->tableView->setModel(model);

    // Обновление представления
    ui->tableView->update();
}

MainWindow::~MainWindow()
{
    delete ui;
}


// Окно просмотр информации о товаре
void MainWindow::on_tableView_doubleClicked(const QModelIndex &index)
{
    ProductInfo* productInfoWindow = new ProductInfo(index,this);
    productInfoWindow->setWindowTitle("Информация о товаре");
    productInfoWindow->setModal(true);
    productInfoWindow->exec();

}


