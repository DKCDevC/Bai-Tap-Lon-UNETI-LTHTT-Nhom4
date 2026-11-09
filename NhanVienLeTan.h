#ifndef NHANVIENLETAN_H
#define NHANVIENLETAN_H

#include "Nguoi.h"

class NhanVienLeTan : virtual public Nguoi {
protected:
    string maNhanVien;
    string chucVu;
    string phongBan;
    double luongCoBan;
    double heSoLuong;
public:
    NhanVienLeTan();
    NhanVienLeTan(string ma, string ten, string ns, string mail, string maNV, string cv, double luongCB, double hsL, string pb);
    virtual ~NhanVienLeTan();

    string getMaNhanVien();
    string getChucVu();
    double getLuongCoBan();
    double getHeSoLuong();
    string getPhongBan();

    void setMaNhanVien(string maNV);
    void setChucVu(string cv);
    void setLuongCoBan(double luongCB);
    void setHeSoLuong(double hsL);
    void setPhongBan(string pb);

    void nhap();
    void xuat();
    double tinhLuong();
};

#endif