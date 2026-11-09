#include "ChuyenVienDichVu.h"

ChuyenVienDichVu::ChuyenVienDichVu()
    : Nguoi(), maChuyenVien(""), chuyenMon(""), soNamKinhNghiem(0), heSoLuong(0.0), hocVi(""), donViCongTac(""), luongCoBan(0.0) {}

ChuyenVienDichVu::ChuyenVienDichVu(string ma, string ten, string ns, string mail, string maCV, string cm, int snkn, double hsL, string hv, string dvct, double luongCB)
    : Nguoi(ma, ten, ns, mail), maChuyenVien(maCV), chuyenMon(cm), soNamKinhNghiem(snkn), heSoLuong(hsL), hocVi(hv), donViCongTac(dvct), luongCoBan(luongCB) {}

ChuyenVienDichVu::~ChuyenVienDichVu() {}

string ChuyenVienDichVu::getMaChuyenVien() 
{ 
    return maChuyenVien; 
};

string ChuyenVienDichVu::getChuyenMon() 
{ 
    return chuyenMon; 
};

int ChuyenVienDichVu::getSoNamKinhNghiem() 
{ 
    return soNamKinhNghiem; 
};

double ChuyenVienDichVu::getHeSoLuong() 
{ 
    return heSoLuong; 
};

string ChuyenVienDichVu::getHocVi() 
{ 
    return hocVi; 
};

string ChuyenVienDichVu::getDonViCongTac() 
{ 
    return donViCongTac; 
};

double ChuyenVienDichVu::getluongCoBan() 
{ 
    return luongCoBan; 
};

void ChuyenVienDichVu::setMaChuyenVien(string maCV) 
{ 
    maChuyenVien = maCV; 
};
void ChuyenVienDichVu::setChuyenMon(string cm) 
{ 
    chuyenMon = cm; 
};
void ChuyenVienDichVu::setSoNamKinhNghiem(int snkn) 
{ 
    soNamKinhNghiem = snkn; 
};
void ChuyenVienDichVu::setHeSoLuong(double hsL) 
{       
    heSoLuong = hsL; 
};
void ChuyenVienDichVu::setHocVi(string hv)          
{ 
    hocVi = hv; 
};
void ChuyenVienDichVu::setDonViCongTac(string dvct) 
{ 
    donViCongTac = dvct; 
};
void ChuyenVienDichVu::setLuongCoBan(double luongCB) 
{ 
    luongCoBan = luongCB; 
};
void ChuyenVienDichVu::nhap() {
    Nguoi::nhap();
    cout << "Nhap ma chuyen vien: "; getline(cin, maChuyenVien);
    cout << "Nhap chuyen mon: "; getline(cin, chuyenMon);
    cout << "Nhap so nam kinh nghiem: "; cin >> soNamKinhNghiem;
    cout << "Nhap he so luong: "; cin >> heSoLuong;
    cin.ignore();
    cout << "Nhap hoc vi: "; getline(cin, hocVi);
    cout << "Nhap don vi cong tac: "; getline(cin, donViCongTac);
    cout << "Nhap luong co ban: "; cin >> luongCoBan;
}
double ChuyenVienDichVu::tinhLuong() {
    return luongCoBan * heSoLuong + soNamKinhNghiem * 100000;
}
void ChuyenVienDichVu::xuat() {
    Nguoi::xuat();
    cout << "Ma chuyen vien: " << maChuyenVien << endl;
    cout << "Chuyen mon: " << chuyenMon << endl;
    cout << "So nam kinh nghiem: " << soNamKinhNghiem << endl;
    cout << "He so luong: " << heSoLuong << endl;
    cout << "Hoc vi: " << hocVi << endl;
    cout << "Don vi cong tac: " << donViCongTac << endl;
    cout << "Luong co ban: " << luongCoBan << endl;
}
void ChuyenVienDichVu::danhGiaNamKinhNghiem() {
    if (soNamKinhNghiem < 2) {
        cout << "Danh gia: Nhan vien moi vao cong ty." << endl;
    } else if (soNamKinhNghiem < 5) {
        cout << "Danh gia: Nhan vien co kinh nghiem." << endl;
    } else {
        cout << "Danh gia: Nhan vien giau kinh nghiem." << endl;
    }
}