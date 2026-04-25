#include <iostream>
#include <math.h>

using namespace std;

int main () {
    int m, n;
    cout << "Nhap kich thuoc M va N: " <<endl;
    cout << "m = " ; cin >> m;
    cout << "n = " ; cin >> n;
    
    int a[m][n];
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout << "Nhap phan tu " << "a["<<i<<"]["<<j<<"]";
            cin >> a[i][j];
        }
    }


    for (int i=0; i<m; i++) {
        int mingt = 0;
        for (int j=0 ;j<n; j++) {
            if (a[i][j] < mingt) {
                mingt = a[i][j];
            }
        cout << "i = " << i+1 << "j = " << j+1;
        }
    }
    return 0;
}