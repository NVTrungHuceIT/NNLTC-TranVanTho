#include <iostream>
#include <iomanip>

using namespace std;

void nhapmang(int &n, int &m, int a[100][100])
{
    cout << "Nhap so luong hang: ";
    cin >> n;
    cout << "Nhap so luong cot: ";
    cin >> m;
    cout <<"Nhap ma tran: " << n << "x" << m << endl;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }
}

void xuatmang (int n, int m, int a[100][100])
{
    cout <<"xuat ma tran: "<<endl;
    for (int i=0;i<n;i++){
        for (int j=0; j<m; j++){
            cout << setw(3) << a[i][j];
        }        
        cout << endl;
    }
}

int maxgiatri (int n, int m, int a[100][100]) {
    int max = a[0][0];
    for (int j=0; j<m; j++) {
        for (int i = 0; i<n; i++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }
    return max;
}

void xoacot (int m, int n, int k, int a[100][100]) {
    for (int i=0; i<n; i++) {
        for (int j=k; j<m-1;j++){
            a[i][j] = a[i][j+1];
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=k; j<m-1;j++){
            cout << a[i][j] << " ";
        }
    }
    cout << endl;
}

int main() {
    int m,n, a[100][100];
    int max = maxgiatri(n,m,a);
    
    nhapmang(n,m,a);
    

    for (int j=0; j<m; j++) {
        for (int i = 0; i<n; i++) {
            if (a[i][j] == max) {
                xoacot(m,n,j,a);
            }
        }
    }
    xuatmang(n,m-1,a);
}


//xong
