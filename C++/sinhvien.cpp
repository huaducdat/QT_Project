#include "sinhvien.h"

// Constructor mặc định
SinhVien::SinhVien()
{

}

SinhVien::SinhVien(QString hoTen)
{
    QListWidgetItem::setText(hoTen);
}

SinhVien::SinhVien(QString hoTen, QString ngaySinh, QString gioiTinh, QString diem)
{
    QListWidgetItem::setText(hoTen);
    this->ngaySinh = ngaySinh;
    this->gioiTinh = gioiTinh;
    this->diem = diem;

}


// Phương thức nhập tên sinh viên
void SinhVien::nhapTen(QString hoTen)
{
    QListWidgetItem::setText(hoTen);
}

// Phương thức nhập ngày sinh sinh viên
void SinhVien::nhapNgaySinh(QString ngaySinh)
{
    this -> ngaySinh = ngaySinh;
}

// Phương thức nhập giới tính sinh viên
void SinhVien::nhapGioiTinh(QString gioiTinh)
{
    this -> gioiTinh = gioiTinh;
}

// Phương thức nhập điểm của sinh viên
void SinhVien::nhapDiem(QString diem)
{
    this -> diem = diem;
}

// Phương thức xuất tên sinh viên
QString SinhVien::xuatTen()
{
    return QListWidgetItem::text();
}

// Phương thức xuất ngày sinh sinh viên
QString SinhVien::xuatNgaySinh()
{
    return ngaySinh;
}

// Phương thức xuất giới tính sinh viên
QString SinhVien::xuatGioiTinh()
{
    return gioiTinh;
}

// Phương thức xuất điểm sinh viên
QString SinhVien::xuatDiem()
{
    return diem;
}
