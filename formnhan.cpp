#include "formnhan.h"
#include "ui_formnhan.h"

FormNhan::FormNhan(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormNhan)
{
    ui->setupUi(this);
}

FormNhan::~FormNhan()
{
    delete ui;
}

void FormNhan::on_pushButton_clicked()
{
    QString a = ui->lineEdit->text();
    QString b = ui->lineEdit_2->text();
    if(!cm.isDinhDangSoNguyen(a) || !cm.isDinhDangSoNguyen(b))
    {
        ui->lineEdit_3->setText("Hay nhap so nguyen!!!!");
    }else
    {
        ui->lineEdit_3->setText(cm.tinhToan(a, b, "*"));
    }
}
