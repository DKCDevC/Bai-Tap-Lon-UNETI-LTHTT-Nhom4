#include "Phong.h"
#include <fstream>
#include <sstream>

bool kiemMaChuyenVienHopLe(const string& maChuyenVien) {
    ifstream file("ChuyenVienDichVu.txt");
    if (!file.is_open()) {
        cerr << "Khong the mo file ChuyenVienDichVu.txt" << endl;
        return false;
    }

    string line;
    while (getline(file, line)) {
        istringstream iss(line);
        string maCV;

        getline(iss, maCV, '|');
        if (iss >> maCV) {
            if (maCV == maChuyenVien) {
                file.close();
                return true; 
            }
        }
    }
    file.close();
    return false;
}

Phong::Phong() : maPhong(""), tenPhong(""), soKhachToiDa(0), giaPhongCoBan(0.0), maChuyenVien("") {} 

Phong::Phong(string ma, string ten, int soKhachToiDa, double giaPhongCoBan, string maChuyenVien) 
    : maPhong(ma), tenPhong(ten), soKhachToiDa(soKhachToiDa), giaPhongCoBan(giaPhongCoBan), maChuyenVien(maChuyenVien) {} 
Phong::~Phong() {}

string Phong::getMaPhong() const 
{ 
    return maPhong; 
}
string Phong::getTenPhong() const
{ return tenPhong; 
}
int Phong::getSoKhachToiDa() const 
{ 
    return soKhachToiDa; 
}
double Phong::getGiaPhongCoBan() const
{ 
    return giaPhongCoBan; 
}
string Phong::getMaChuyenVien() const
{ 
    return maChuyenVien; 
}
void Phong::nhap() {
    cout << "Nhap ma phong: "; 
    getline(cin, maPhong);
    cout << "Nhap ten phong: "; 
    getline(cin, tenPhong);
    do{
        cout << "Nhap so khach toi da: "; 
        cin >> soKhachToiDa; 
        if(soKhachToiDa <= 0){
            cout << "So khach toi da phai lon hon 0. Vui long nhap lai." << endl;
        }
    } while(soKhachToiDa <= 0);
    do{
        cout << "Nhap gia phong co ban: "; 
        cin >> giaPhongCoBan; 
        if(giaPhongCoBan <= 0){
            cout << "Gia phong co ban phai lon hon 0. Vui long nhap lai." << endl;
        }
    } while(giaPhongCoBan <= 0);
    bool HopLe = false;
    do{
        cout << "Nhap ma chuyen vien: "; 
        cin >> maChuyenVien; 
        if(maChuyenVien.length() != 5){
            cout << "Ma chuyen vien phai co 5 ky tu. Vui long nhap lai." << endl;
        } else {
            if (kiemMaChuyenVienHopLe(maChuyenVien)) {
                HopLe = true;
            } else {
                cout << "Ma chuyen vien khong hop le. Vui long nhap lai." << endl;
            }
        }
    } while(!HopLe);
}
void Phong::xuat() {
    cout << "Ma phong: " << maPhong << " | Ten phong: " <<  tenPhong << " | So khach toi da: " << soKhachToiDa
         << " | Gia phong co ban: " << giaPhongCoBan << " | Ma chuyen vien: " << maChuyenVien << endl;
}

