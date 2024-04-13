#include "authwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AuthWindow w;
    w.setWindowTitle("Авторизация");
    w.show();
    return a.exec();
}
