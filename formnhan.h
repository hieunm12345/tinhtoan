#ifndef FORMNHAN_H
#define FORMNHAN_H

#include <QWidget>
#include <common.h>

namespace Ui {
class FormNhan;
}

class FormNhan : public QWidget
{
    Q_OBJECT

public:
    explicit FormNhan(QWidget *parent = nullptr);
    ~FormNhan();

private slots:
    void on_pushButton_clicked();

private:
    Ui::FormNhan *ui;
    Common cm;
};

#endif // FORMNHAN_H
