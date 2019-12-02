#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dialogSV = new Dialog_SV();
//    dialogSV->show();

    // test list khi mới tạo ra từ QListWidget
    //ui->lstDSSV->addItem("Nguyễn Thị Tí");
    //ui->lstDSSV->addItem("Hoàng Văn Tèo");

    // Tạo một đối tượng sinhVien thuộc class SinhVien
//    SinhVien* sv = new SinhVien();
//    sv->nhapTen("Nguyễn Đình Công");
//    sv->nhapNgaySinh("20/11/1998");
//    sv->nhapGioiTinh("Nam");
//    sv->nhapDiem("9");

    // Đưa tên sinh viên ra List
//    ui->lstDSSV->addItem((QListWidgetItem*) sv);

}

MainWindow::~MainWindow()
{
    for(int i = 0; i < sinhVien.size(); i++)
    {
        removeSinhVien(sinhVien[i]);
    }
    delete ui;
    delete  dialogSV;
}

void MainWindow::addSinhVien(SinhVien* sv)
{
    ui->lstDSSV->addItem((QListWidgetItem*) sv);
    sinhVien.push_back(sv);
}

void MainWindow::addSinhVien(QString hoTen)
{
    SinhVien* sv = new SinhVien(hoTen);
    addSinhVien(sv);
}

void MainWindow::addSinhVien(QString hoTen, QString ngaySinh, QString gioiTinh, QString diem)
{
    SinhVien* sv = new SinhVien(hoTen, ngaySinh, gioiTinh, diem);
    addSinhVien(sv);
}

void MainWindow::removeSinhVien(SinhVien *sv)
{
    ui->lstDSSV->removeItemWidget((QListWidgetItem*) sv);
    for(int i=0; i< sinhVien.size(); i++)
    {
        if(sinhVien[i] == sv)
        {
            sinhVien.remove(i);
            delete sv;
        }
    }
}

// Slot click đúp vào tên sinh viên trong list và hiển thị lên label
void MainWindow::on_lstDSSV_itemDoubleClicked(QListWidgetItem *item)
{
//    QString msgThongTin;
//    SinhVien* sv = (SinhVien*) item;
//    msgThongTin = sv->xuatTen() + " " + sv->xuatNgaySinh() + " " + sv->xuatGioiTinh()+ " " + sv->xuatDiem();
//    ui->lblThongTin->setText(msgThongTin);
    dialogSV->HienTHiThongTinSV((SinhVien*) item);
}

void MainWindow::on_btnXoa_clicked()
{
    removeSinhVien((SinhVien*) ui->lstDSSV->currentItem());
}

void MainWindow::on_btnNhap_clicked()
{
    addSinhVien("Sinh Vien moi");

}
