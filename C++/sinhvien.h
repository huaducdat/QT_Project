#ifndef SINHVIEN_H
#define SINHVIEN_H

#include <QListWidgetItem>

class SinhVien: public QListWidgetItem
{
private:
    QString hoTen;
    QString ngaySinh;
    QString gioiTinh;
    QString diem;
public:
    SinhVien();
    SinhVien(QString hoTen);
    SinhVien(QString hoTen, QString ngaySinh, QString gioiTinh, QString diem);
    //~SinhVien();

public:

    // Các phương thức Getter
    void nhapTen(QString hoTen);
    void nhapNgaySinh(QString ngaySinh);
    void nhapGioiTinh(QString gioiTinh);
    void nhapDiem(QString diem);

    // Các phương thức Setter
    QString xuatTen();
    QString xuatNgaySinh();
    QString xuatGioiTinh();
    QString xuatDiem();
};

#endif // SINHVIEN_H
