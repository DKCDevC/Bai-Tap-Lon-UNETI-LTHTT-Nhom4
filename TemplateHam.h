#ifndef TEMPLATE_HAM_T
#define TEMPLATE_HAM_t

template <class T>
void hoanDoi(T& a, T&b){
    T temp = a;
    a = b;
    b = temp;
}

template <class T>
T timMin(T a, T b){
    return (a < b) ? a : b;
}
template <class T>
int timKiemTuanTu(T ds[], int n, T x) {
    for (int i = 0; i < n; i++){
        if(ds[i] == x) {
            return i;
        }
    }
    return -1;
}

#endif