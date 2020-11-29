#ifndef FORMCHIA_H
#define FORMCHIA_H

#include <QWidget>
#include <common.h>

namespace Ui {
class FormChia;
}

class FormChia : public QWidget
{
    Q_OBJECT

public:
    explicit FormChia(QWidget *parent = nullptr);
    ~FormChia();

private slots:
    void on_pushButton_clicked();

private:
    Ui::FormChia *ui;
    Common cm;
};

#endif // FORMCHIA_H
