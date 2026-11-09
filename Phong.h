#ifndef PHONG_H
#define PHONG_H
#include <iostream>
#include <string>
using namespace std;

class Phong {
private:
    string maPhong;
    string tenPhong;
    int  soKhachToiDa;
    double giaPhongCoBan;
    string maChuyenVien;

public:
    Phong();
    Phong(string ma, string ten, int soKhachToiDa, double giaPhongCoBan, string maChuyenVien);
    virtual ~Phong();

    string getMaPhong() const;
    string getTenPhong() const;
    int getSoKhachToiDa() const;
    double getGiaPhongCoBan() const;
    string getMaChuyenVien() const;

    void setMaPhong(string ma);
    void setTenPhong(string ten);
    void setSoKhachToiDa(int soKhachToiDa);
    void setGiaPhongCoBan(double giaPhongCoBan);
    void setMaChuyenVien(string maChuyenVien);

    void nhap();
    void xuat();
    virtual double tinhChiPhi() const = 0;
};

#endif 