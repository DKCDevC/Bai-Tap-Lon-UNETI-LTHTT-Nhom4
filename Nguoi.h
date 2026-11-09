#ifndef NGUOI_H
#define NGUOI_H

#include <iostream>
#include <string>
using namespace std;

class Nguoi{
protected:
    string maNguoi, hoTen, ngaySinh, email;
public:
    Nguoi();
    Nguoi(string ma, string ten, string ns, string mail);
    virtual ~Nguoi();

    virtual void nhap();
    virtual void xuat() const;

    string getMaNguoi() const;
    void setMaNguoi(string ma);
};

#endif
