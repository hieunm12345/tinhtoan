#include "formchia.h"
#include "ui_formchia.h"

FormChia::FormChia(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormChia)
{
    ui->setupUi(this);
}

FormChia::~FormChia()
{
    delete ui;
}

void FormChia::on_pushButton_clicked()
{
    QString a = ui->lineEdit->text();
    QString b = ui->lineEdit_2->text();
    if(!cm.isDinhDangSoNguyen(a) || !cm.isDinhDangSoNguyen(b))
    {
        ui->lineEdit_3->setText("Hay nhap so nguyen!!!!");
    }else
    {
        ui->lineEdit_3->setText(cm.tinhToan(a, b, "/"));
    }
}
