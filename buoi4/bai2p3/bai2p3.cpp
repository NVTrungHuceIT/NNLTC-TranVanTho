#include <iostream>
#include <math.h>

using namespace std;

int main () {
    int m, n;
    cout << "Nhap kich thuoc M va N: " <<endl;
    cin >> m >> n;
    int a[m][n];

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout << "Nhap phan tu " << "a["<<i<<"]["<<j<<"]";
            cin >> a[i][j];
        }
    }
    
    int tongchan=0;
    int tongle= 0;
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            if (a[i][j] %2 == 0) {
                tongchan =  tongchan + a[i][j];
            }
            else {
                tongle= tongle + a[i][j];
            }
        }
    }

    cout << "Tong chan: " << tongchan <<endl;
    cout << "Tong le: " << tongle;

    
}