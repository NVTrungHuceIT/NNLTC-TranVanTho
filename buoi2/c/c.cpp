#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    
    float tong = 0;
    float trungbinh= 0;
    float a[n];
    

   
    for (int i=0; i<n; i++){
        cout << "Nhap phan tu thu " << i+1 << ": ";
        cin >> a[i];

    }

    for (int i=0; i<n; i++){
        tong += a[i];
    }
    for (int i=0; i<n; i++){
        trungbinh = tong/n;
    }
    cout << "tong cua day la: " << tong << endl;
    cout << "trung binh cua day la: " << trungbinh << endl;
    return 0;
}