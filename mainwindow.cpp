#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_cong_clicked()
{
    FormCong *a = new FormCong();
    a->show();
}

void MainWindow::on_pushButton_tru_clicked()
{
    FormTru *a = new FormTru();
    a->show();
}

void MainWindow::on_pushButton_nhan_clicked()
{
    FormNhan *a = new FormNhan();
    a->show();
}

void MainWindow::on_pushButton_chia_clicked()
{
    FormChia *a = new FormChia();
    a->show();
}
