#ifndef QuanLyKhachSan_H
#define QuanLyKhachSan_H

#include "NhanVienLeTan.h"
#include "ChuyenVienDichVu.h"
class QuanLyKhachSan : virtual public NhanVienLeTan, virtual public ChuyenVienDichVu , virtual public Nguoi {
protected:
    string  khuVucPhuTrach;
    int     soLuongNhanSu;
    float   heSoChucVu;
public:
    QuanLyKhachSan();
    QuanLyKhachSan(string ma, string ten, string ns, string mail, string maNV, string cv, double luongCB, double hsL, string pb, string maCV, string cm, int snkn, double hsL2, string hv, string dvct, double luongCB2, string kvpt, int slns, float hsCV);
    virtual ~QuanLyKhachSan();

    string  getKhuVucPhuTrach();
    int     getSoLuongNhanSu();
    float   getHeSoChucVu();

    void setKhuVucPhuTrach(string kvpt);
    void setSoLuongNhanSu(int slns);
    void setHeSoChucVu(float hsCV);
    void nhap();
    void xuat();
    double tinhPhuCap();
    int capNhatSoLuongNhanSu(int slns);
};

#endif