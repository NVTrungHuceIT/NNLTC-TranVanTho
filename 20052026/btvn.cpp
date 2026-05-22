#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    while (n<=0 || n >=20) {
        cout <<"Nhap loi, vui long nhap lai: "; cin >> n; 
    }

    cout << "Nhap n: ";
    int **D = new int *[n];
    for (int i = 0; i < n ; i++) {
        D[i] = new int[n];
    }

    cout << "Nhap mang: " << endl;
    for (int i = 0; i<n ; i++ ) {
        for (int j = 0 ; j<n ; j++){
            cout << "D["<<i<<"]["<<j<<"]= ";
            cin >> D[i][j]; 
        }
    }

    cout << "Mang vua nhap: " << endl;
    for (int i = 0; i< n ; i++) {
        for (int j = 0 ; j < n ; j++) {
            cout << D[i][j]<<"  ";
        }
        cout << endl;
    }

    int max  = D[0][0];
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < n ; j++) {
            if  (max < D[i][j]) {
                max  =  D[i][j];
            }
        }
    }

    int count  = 0;
    int target_row = 0;
    int target_col = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (D[i][j] = max) {
                count ++;
                if (count == 2) {
                    target_row = i;
                    target_col = j;
                    break;
                }
            }
        }
    }

    if (count == 2) {
        cout << target_row << target_col;
    } else {
        cout << "Khong ra cai gi ???";
    }

    return 0;
}