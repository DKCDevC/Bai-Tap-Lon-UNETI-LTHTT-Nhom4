#include "KhachLuuTru.h"

KhachLuuTru::KhachLuuTru() : Nguoi(), maKhach(""), soDienThoai(""), diaChi("") {}

KhachLuuTru::KhachLuuTru(string ma, string ten, string ns, string mail, string maK, string sdt, string dc)
    : Nguoi(ma, ten, ns, mail), maKhach(maK), soDienThoai(sdt), diaChi(dc) {}

KhachLuuTru::~KhachLuuTru() {}

string KhachLuuTru::getMaKhach() const 
{ 
    return maKhach;
};
string KhachLuuTru::getSoDienThoai() const 
{ 
    return soDienThoai; 
};
string KhachLuuTru::getDiaChi() const 
{ 
    return diaChi; 
};
void KhachLuuTru::setMaKhach(string maK) 
{ 
    maKhach = maK; 
};
void KhachLuuTru::setSoDienThoai(string sdt) 
{ 
    soDienThoai = sdt; 
};
void KhachLuuTru::setDiaChi(string dc) 
{
     diaChi = dc;
}

void KhachLuuTru::nhap() {
    Nguoi::nhap();
    cout << "Nhap ma khach: ";      getline(cin, maKhach);
    cout << "Nhap so dien thoai: "; getline(cin, soDienThoai);
    cout << "Nhap dia chi: ";       getline(cin, diaChi);
}

void KhachLuuTru::xuat() const {
    Nguoi::xuat();
    cout << " | Ma khach: " << maKhach << " | SDT: " << soDienThoai << " | Dia chi: " << diaChi << endl;
}

ostream& operator<<(ostream& os, const KhachLuuTru& klt) {
    os << "Ma: " << klt.maNguoi << "Ho ten: " << klt.hoTen
       << "Ngay sinh: " << klt.ngaySinh << "Email: " << klt.email
       << "Ma khach: " << klt.maKhach << "SDT: " << klt.soDienThoai
       << "Dia chi: " << klt.diaChi;
    return os;
}

istream& operator>>(istream& is, KhachLuuTru& klt) {
    getline(is >> ws, klt.maNguoi);
    getline(is, klt.hoTen);
    getline(is, klt.ngaySinh);
    getline(is, klt.email);
    getline(is, klt.maKhach);
    getline(is, klt.soDienThoai);
    getline(is, klt.diaChi);
    return is;
}

bool soSanhKhachLuuTru(const KhachLuuTru& a, const KhachLuuTru& b) {
    return a.maKhach == b.maKhach;
}
