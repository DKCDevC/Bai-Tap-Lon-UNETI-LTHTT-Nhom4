#ifndef KHACHLUUTRU_H
#define KHACHLUUTRU_H

#include "Nguoi.h"

class KhachLuuTru : public Nguoi {
private:
    string maKhach;
    string soDienThoai;
    string diaChi;
public:
    KhachLuuTru();
    KhachLuuTru(string ma, string ten, string ns, string mail, string maKhach, string soDienThoai, string diaChi);
    ~KhachLuuTru();

    void setMaKhach(string maKhach);
    void setSoDienThoai(string soDienThoai);
    void setDiaChi(string diaChi);

    string getMaKhach() const;
    string getSoDienThoai() const;
    string getDiaChi() const;

    void nhap() override;
    void xuat() const override;

    friend ostream& operator<<(ostream& os, const KhachLuuTru& klt);
    friend istream& operator>>(istream& is, KhachLuuTru& klt);
    friend bool soSanhKhachLuuTru(const KhachLuuTru& a, const KhachLuuTru& b);
};

#endif