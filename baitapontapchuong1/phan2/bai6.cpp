#include <iostream>
#include <cmath>

using namespace std;

bool songuyento (int m) {
    if (m<2) return false;
    for (int i =2; i<= sqrt(m); i++) {
        if (m%i == 0) return false;
    }
    return true;
}

int main () {
    int m;
    cout << "Nhap vao so nguyen duong m: "; cin >> m;
    if ( m<=100 || m >= 200) {
        cout << "Nhap lai di m khong hop le. Vui long nhap lai." << endl;
        return 0;
    } else if (songuyento(m)) {
        cout << m << " la so nguyen to." << endl;
    } else {
        cout << m << " khong la so nguyen to." << endl;
    } 
}    
