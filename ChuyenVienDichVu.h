#ifndef CHUYENVIENDICHVU_H
#define CHUYENVIENDICHVU_H

#include "Nguoi.h"

class ChuyenVienDichVu : virtual public Nguoi {
protected:
    string  maChuyenVien;
    string  chuyenMon;
    int     soNamKinhNghiem;
    double  heSoLuong;
    string  hocVi;
    string  donViCongTac;
    double  luongCoBan;
public:
    ChuyenVienDichVu();
    ChuyenVienDichVu(string ma, string ten, string ns, string mail, string maCV, string cm, int snkn, double hsL, string hv, string dvct, double luongCB);
    virtual ~ChuyenVienDichVu();

    string  getMaChuyenVien();
    string  getChuyenMon();
    int     getSoNamKinhNghiem();
    double  getHeSoLuong();
    string  getHocVi();
    string  getDonViCongTac();
    double  getluongCoBan();  
    
    void setMaChuyenVien(string maCV);
    void setChuyenMon(string cm);
    void setSoNamKinhNghiem(int snkn);
    void setHeSoLuong(double hsL);          
    void setHocVi(string hv);
    void setDonViCongTac(string dvct);
    void setLuongCoBan(double luongCB);
    
    void nhap();
    void xuat();
    double tinhLuong();
    void danhGiaNamKinhNghiem();
};

#endif