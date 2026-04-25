#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int m,n;
    cout << "Nhap kich thuoc ma tran: ";
    cin >> m >> n;

    float a[m][n];  
    float tongchan = 0;
    float tongle = 0;

    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++) {
            cout << "Nhap phan tu thu [" << i+1 << "][" << j+1 << "]: ";
            cin >> a[i][j];
        }
    }
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++) {
            if ((int)a[i][j] % 2 == 0) {
                tongchan += a[i][j];
            } 
            else {
                tongle += a[i][j];
            }
        }
    }
    float max = 0;
    for (int i=0; i<m; i++){
        max = a[i][0];
        for (int j=0; j<n; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
        cout << "Gia tri lon nhat cua dong " << i+1 << " la: " << max << endl;
    }
    
    if (tongchan !=0) cout << "Tong cac phan tu chan: " << tongchan << endl;
    else cout << "Khong co phan tu chan nao trong ma tran" << endl;
    
    if (tongle !=0) cout << "Tong cac phan tu le: " << tongle << endl;
    else cout << "Khong co phan tu le nao trong ma tran" << endl;
    
    return 0;

}