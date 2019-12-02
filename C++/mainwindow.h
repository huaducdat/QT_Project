#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include "sinhvien.h"

#include <QWidget>
#include <QString>
#include <QVector>

#include "dialog_sv.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class Dialog_SV;

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void addSinhVien(SinhVien* sv);
    void addSinhVien(QString hoTen);
    void addSinhVien(QString hoTen, QString ngaySinh, QString gioiTinh, QString diem);

    void removeSinhVien(SinhVien* sv);




private slots:
    void on_lstDSSV_itemDoubleClicked(QListWidgetItem *item);

    void on_btnXoa_clicked();

    void on_btnNhap_clicked();

private:
    Ui::MainWindow *ui;

    QVector<SinhVien*> sinhVien;

    Dialog_SV* dialogSV;
};
#endif // MAINWINDOW_H
