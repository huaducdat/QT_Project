#ifndef DIALOG_SV_H
#define DIALOG_SV_H

#include <QDialog>
#include "mainwindow.h"
#include "sinhvien.h"

namespace Ui {
class Dialog_SV;
}

class SinhVien;

class Dialog_SV : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_SV(QWidget *parent = nullptr);
    ~Dialog_SV();
    void HienTHiThongTinSV(SinhVien* sv);

private:
    Ui::Dialog_SV *ui;
    SinhVien* svDialog;
};

#endif // DIALOG_SV_H
