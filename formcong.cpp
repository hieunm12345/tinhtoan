#include "formcong.h"
#include "ui_formcong.h"

FormCong::FormCong(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormCong)
{
    ui->setupUi(this);
}

FormCong::~FormCong()
{
    delete ui;
}

void FormCong::on_pushButton_clicked()
{
    QString a = ui->lineEdit->text();
    QString b = ui->lineEdit_2->text();
    if(!cm.isDinhDangSoNguyen(a) || !cm.isDinhDangSoNguyen(b))
    {
        ui->lineEdit_3->setText("Hay nhap so nguyen!!!!");
    }else
    {
        ui->lineEdit_3->setText(cm.tinhToan(a, b, "+"));
    }
}
