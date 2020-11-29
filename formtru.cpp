#include "formtru.h"
#include "ui_formtru.h"

FormTru::FormTru(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormTru)
{
    ui->setupUi(this);
}

FormTru::~FormTru()
{
    delete ui;
}


void FormTru::on_pushButton_clicked()
{
    QString a = ui->lineEdit->text();
    QString b = ui->lineEdit_2->text();
    if(!cm.isDinhDangSoNguyen(a) || !cm.isDinhDangSoNguyen(b))
    {
        ui->lineEdit_3->setText("Hay nhap so nguyen!!!!");
    }else
    {
        ui->lineEdit_3->setText(cm.tinhToan(a, b, "-"));
    }
}
