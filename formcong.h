#ifndef FORMCONG_H
#define FORMCONG_H

#include <QWidget>
#include <common.h>

namespace Ui {
class FormCong;
}

class FormCong : public QWidget
{
    Q_OBJECT

public:
    explicit FormCong(QWidget *parent = nullptr);
    ~FormCong();

private slots:
    void on_pushButton_clicked();

private:
    Ui::FormCong *ui;
    Common cm;
};

#endif // FORMCONG_H
