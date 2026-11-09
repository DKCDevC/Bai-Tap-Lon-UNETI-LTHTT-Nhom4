#include "Nguoi.h"

Nguoi::Nguoi() : maNguoi(""), hoTen(""), ngaySinh(""), email("")    {}

Nguoi::Nguoi(string ma, string ten, string ns, string mail)
    : maNguoi(ma), hoTen(ten), ngaySinh(ns), email(mail)    {}

Nguoi::~Nguoi() {}

void Nguoi::nhap(){
    cout << "Nhap ma nguoi: ";      getline(cin, maNguoi);
    cout << "Nhap ho & ten: ";      getline(cin, hoTen);
    cout << "Nhap ngay sinh: ";     getline(cin, ngaySinh);
    cout << "Nhap email: ";         getline(cin, email);
}

void Nguoi::xuat() const{
    cout << "Ma: " << maNguoi << " | Ho ten: " << hoTen 
    <<" | Ngay sinh: " << ngaySinh << " | Email: " << email;
}
string Nguoi::getMaNguoi() const {
    return maNguoi;
}

void Nguoi::setMaNguoi(string ma) {
    maNguoi = ma;
}