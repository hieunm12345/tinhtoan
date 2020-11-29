#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <formcong.h>
#include <formtru.h>
#include <formnhan.h>
#include <formchia.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_cong_clicked();

    void on_pushButton_tru_clicked();

    void on_pushButton_nhan_clicked();

    void on_pushButton_chia_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
