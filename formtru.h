#ifndef FORMTRU_H
#define FORMTRU_H

#include <QWidget>
#include <common.h>

namespace Ui {
class FormTru;
}

class FormTru : public QWidget
{
    Q_OBJECT

public:
    explicit FormTru(QWidget *parent = nullptr);
    ~FormTru();

private slots:
    void on_pushButton_clicked();

private:
    Ui::FormTru *ui;
    Common cm;
};

#endif // FORMTRU_H
