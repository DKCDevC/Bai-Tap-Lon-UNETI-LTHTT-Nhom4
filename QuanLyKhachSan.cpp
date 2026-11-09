#include "QuanLyKhachSan.h"

QuanLyKhachSan::QuanLyKhachSan()
    : NhanVienLeTan(), ChuyenVienDichVu(), Nguoi(), khuVucPhuTrach(""), soLuongNhanSu(0), heSoChucVu(0.0) {}
QuanLyKhachSan::QuanLyKhachSan(string ma, string ten, string ns, string mail, string maNV, string cv, double luongCB, double hsL, string pb, string maCV, string cm, int snkn, double hsL2, string hv, string dvct, double luongCB2, string kvpt, int slns, float hsCV)
    : NhanVienLeTan(ma, ten, ns, mail, maNV, cv, luongCB, hsL, pb), ChuyenVienDichVu(ma, ten, ns, mail, maCV, cm, snkn, hsL2, hv, dvct, luongCB2), Nguoi(ma, ten, ns, mail), khuVucPhuTrach(kvpt), soLuongNhanSu(slns), heSoChucVu(hsCV) {}
QuanLyKhachSan::~QuanLyKhachSan() {}

string QuanLyKhachSan::getKhuVucPhuTrach() 
{ 
    return khuVucPhuTrach; 
};
int QuanLyKhachSan::getSoLuongNhanSu()
{ 
    return soLuongNhanSu; 
};
float QuanLyKhachSan::getHeSoChucVu()
{
    return heSoChucVu; 
};

void QuanLyKhachSan::setKhuVucPhuTrach(string kvpt) 
{ 
    khuVucPhuTrach = kvpt; 
};
void QuanLyKhachSan::setSoLuongNhanSu(int slns)
{
    soLuongNhanSu = slns;
};
void QuanLyKhachSan::setHeSoChucVu(float hsCV)
{
    heSoChucVu = hsCV;
};

void QuanLyKhachSan::nhap() {
    NhanVienLeTan::nhap();
    ChuyenVienDichVu::nhap();
    cout << "Nhap khu vuc phu trach: "; 
    cin.ignore(); 
    getline(cin, khuVucPhuTrach);
    cout << "Nhap so luong nhan su: "; 
    cin >> soLuongNhanSu;
    cout << "Nhap he so chuc vu: "; 
    cin >> heSoChucVu;
}
void QuanLyKhachSan::xuat() {
    NhanVienLeTan::xuat();
    ChuyenVienDichVu::xuat();
    cout << "Khu vuc phu trach: " << khuVucPhuTrach << endl;
    cout << "So luong nhan su: " << soLuongNhanSu << endl;
    cout << "He so chuc vu: " << heSoChucVu << endl;
}
double QuanLyKhachSan::tinhPhuCap() {
    double luongQuanLy = NhanVienLeTan::tinhLuong() + heSoChucVu * 2000000;
    return luongQuanLy;
}
int QuanLyKhachSan::capNhatSoLuongNhanSu(int slns) {
    if (slns < 0) {
        cout << "So luong nhan su khong hop le!" << endl;
        return soLuongNhanSu;
    }
    soLuongNhanSu = slns;
    return soLuongNhanSu;
}   