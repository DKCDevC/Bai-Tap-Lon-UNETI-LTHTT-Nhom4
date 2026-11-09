#include "NhanVienLeTan.h"

NhanVienLeTan::NhanVienLeTan()
    : Nguoi(), maNhanVien(""), chucVu(""), phongBan(""), luongCoBan(0.0), heSoLuong(0.0) {}

NhanVienLeTan::NhanVienLeTan(string ma, string ten, string ns, string mail, string maNV, string cv, double luongCB, double hsL, string pb)
    : Nguoi(ma, ten, ns, mail), maNhanVien(maNV), chucVu(cv), phongBan(pb), luongCoBan(luongCB), heSoLuong(hsL) {}

NhanVienLeTan::~NhanVienLeTan() {}

string NhanVienLeTan::getMaNhanVien() 
{ 
    return maNhanVien; 
};

string NhanVienLeTan::getChucVu() 
{ 
    return chucVu; 
};

double NhanVienLeTan::getLuongCoBan() 
{ 
    return luongCoBan; 
};

double NhanVienLeTan::getHeSoLuong() 
{ 
    return heSoLuong; 
};

string NhanVienLeTan::getPhongBan() { 
    return phongBan; 
};



void NhanVienLeTan::setMaNhanVien(string maNV) 
{ 
    maNhanVien = maNV; 
};
void NhanVienLeTan::setChucVu(string cv) 
{ 
    chucVu = cv; 
};

void NhanVienLeTan::setLuongCoBan(double luongCB) 
{ 
    luongCoBan = luongCB; 
};

void NhanVienLeTan::setHeSoLuong(double hsL) 
{ 
    heSoLuong = hsL; 
};

void NhanVienLeTan::setPhongBan(string pb) 
{ 
    phongBan = pb; 
};

void NhanVienLeTan::nhap() {
    Nguoi::nhap();
    cout << "Nhap ma nhan vien: "; getline(cin, maNhanVien);
    cout << "Nhap chuc vu: ";      getline(cin, chucVu);
    do {
        cout << "Nhap luong co ban (>0): "; cin >> luongCoBan;
    } while (luongCoBan <= 0);
    do {
        cout << "Nhap he so luong (>0): "; cin >> heSoLuong;
    } while (heSoLuong <= 0);
    cin.ignore();
    cout << "Nhap phong ban: ";    getline(cin, phongBan);
};

double NhanVienLeTan::tinhLuong() {
    return luongCoBan * heSoLuong;
};

void NhanVienLeTan::xuat() {
    Nguoi::xuat();
    cout << "Ma NV: "       << maNhanVien << endl;
    cout << "Chuc vu: "     << chucVu << endl;
    cout << "Phong ban: "   << phongBan << endl;
    cout << "Luong CB: "    << luongCoBan << endl;
    cout << "HS Luong: "    << heSoLuong << endl;
    cout << "Luong: "       << tinhLuong() << endl;
};