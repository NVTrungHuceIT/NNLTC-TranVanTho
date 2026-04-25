#include <iostream>
#include <iomanip>
using namespace std;

struct sinhvien {
    string ten;
    float diem[100]; 

};
typedef struct sinhvien SV;

int main() {
    int m,n;
    cout << "So sinh vien: ";
    cin >> n;
    cout << "So mon hoc: ";
    cin >> m;
    cin.ignore();

    SV ds[n];
    for (int i = 0; i<n; i++) {
        cout << "Ten sinh vien: ";
        getline(cin, ds[i].ten);
    }

    for (int i = 0; i<n; i++) {
        for (int j = 0; j< m;  j++) {
        cout << "Nhap diem mon " << j+1 << " cua " << ds[i].ten << ": ";
        cin >> ds[i].diem[j];
        }
    }

    cout << "Bang diem" << endl;

    for (int i=0; i<n; i++) {
        cout << setw (30) << ds[i].ten;
        for (int j = 0; j<m; j++) {
            cout << setw(5) << ds[i].diem[j];
        }
        cout << endl;
    }
    

    for (int i=0; i<n; i++) {
        float tong = 0;
        for (int j=0; j<m; j++) {
            tong=  tong + ds[i].diem[j];   
        }
        cout << "Diem trung binh cua " << ds[i].ten <<" la: " << tong/m;
        cout << endl;
    }
}   