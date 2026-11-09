#ifndef DANH_SACH_H
#define DANH_SACH_H

#include<iostream>
using namespace std;

template <class T>
class DanhSach{
    private:
        T* ds;                      
        int So_Luong, Suc_Chua;     

    public:
        DanhSach(int Suc_Chua_Ban_Dau = 100){
            Suc_Chua = Suc_Chua_Ban_Dau;
            So_Luong = 0;
            ds = new T[Suc_Chua];
        }

    ~DanhSach(){
        delete[] ds;
    }

    int Lay_So_Luong() const{
        return So_Luong;
    }

    void Mo_Rong(){
        int Moi_Suc_Chua = (Suc_Chua > 0) ? Suc_Chua * 2 : 1;
        T* temp = new T[Moi_Suc_Chua];
        for(int i = 0; i < So_Luong; i++){
            temp[i] = ds[i];
        }
        delete[] ds;
        ds = temp;
        Suc_Chua = Moi_Suc_Chua;
    }

    bool Them(const T& obj){
        if(So_Luong >= Suc_Chua){
            Mo_Rong();
        }
        ds[So_Luong++] = obj;
        return true;
    }

    bool Xoa(int Vtri){
        if(Vtri < 0 || Vtri >= So_Luong) return false;
        for(int i = Vtri; i < So_Luong - 1; i++){
            ds[i] = ds[i + 1];
        }
        So_Luong--;
        return true;
    }

    bool Sua(int Vtri, const T& obj){
        if(Vtri < 0 || Vtri >= So_Luong) return false;
        ds[Vtri] = obj;
        return true;
    }

    bool Chen(int k, const T& obj){
        if(k < 0 || k > So_Luong) return false;
        if(So_Luong >= Suc_Chua){
            Mo_Rong();
        }
        for(int i = So_Luong; i > k; i--){
            ds[i] = ds[i - 1];
        }
        ds[k] = obj;
        So_Luong++;
        return true;
    }
 
    void Xuat_DanhSach() const{
        for(int i = 0; i < So_Luong; i++){
            cout << ds[i] << endl;
        }
    }
    
    T& operator[](int index){
        if(index < 0 || index >= So_Luong){
            throw out_of_range("Chi so vuot qua gioi han danh sach!");
        }
        return ds[index];
    }
    const T& operator[](int index) const{
        if(index < 0 || index >= So_Luong){
            throw out_of_range("Chi so vuot qua gioi han danh sach!");
        }
        return ds[index];
    }

};

#endif