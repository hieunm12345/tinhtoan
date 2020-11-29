#include "common.h"

Common::Common()
{

}

bool Common::isDinhDangSoNguyen(QString str)
{
    if(str.length() == 0)
    {
        return false;
    }
    if((str.at(0) < '0' || str.at(0) > '9') && str.at(0) != '-')
    {
        return false;
    }
    if(str.at(0) == '-' && str.length() == 1)
    {
        return false;
    }
    for(int i = 1;i < str.length(); i++)
    {
        if(str.at(i) < '0' || str.at(i) > '9')
        {
            return false;
        }
    }
    return true;
}

QString Common::tinhToan(QString a, QString b, QString p)
{
    double kq = 0;
    double ia = a.toDouble();
    double ib = b.toDouble();
    if (p == "+")
    {
        kq = ia + ib;
    } else if(p == "-")
    {
        kq = ia - ib;
    } else if(p == "*")
    {
        kq = ia * ib;
    } else if(p == "/")
    {
        kq = ia/ib;
    }
    return QString::number(kq);
}
