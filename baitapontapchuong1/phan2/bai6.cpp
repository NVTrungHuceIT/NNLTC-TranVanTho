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
    int n;

    while (true) {
        cout << "Nhap n: ";
        cin >> n;
        if (n<  99 || n>200) {
            cout << "Nhap lai n (100 <= n <= 200): ";
        } else if (songuyento(n)) {
            cout << n << " la so nguyen to." << endl;
            break;
        }
        else {
            cout << n << " khong la so nguyen to." << endl;
            break;
        }
    }
}  

//xong
