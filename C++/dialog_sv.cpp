#include "dialog_sv.h"
#include "ui_dialog_sv.h"

Dialog_SV::Dialog_SV(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_SV)
{
    ui->setupUi(this);
}

Dialog_SV::~Dialog_SV()
{
    delete ui;
}

void Dialog_SV::HienTHiThongTinSV(SinhVien *sv)
{
    ui->txtTen->setText(sv->xuatTen());
    ui->txtNgaySinh->setText(sv->xuatNgaySinh());
    ui->txtGioiTinh->setText(sv->xuatGioiTinh());
    ui->txtDiem->setText((sv->xuatDiem()));
    show();
}
