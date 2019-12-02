#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.addSinhVien("Dat Hua", "15/10/1994", "nam", "10");
    w.addSinhVien("Vu Long", "15/10/1994", "nam", "10");
    w.addSinhVien("Linh Nguyen", "15/10/1994", "nam", "10");
    w.show();
    return a.exec();
}
