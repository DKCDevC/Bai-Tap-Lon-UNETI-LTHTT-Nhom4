#include <iostream>
#include "DanhSach.h"

using namespace std;

int main() {
    
    DanhSach<int> ds(10);
    
    ds.Them(10);
    ds.Them(20);
    ds.Them(30);

    cout << "Danh sach sau khi them:" << endl;
    ds.Xuat_DanhSach();

    return 0;
}
