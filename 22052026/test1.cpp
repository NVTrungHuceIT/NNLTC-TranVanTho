#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct contact {
    string ten;
    string diachi;
    string dtnha;
    string dtdd;
};

int main () {
    int n;
    struct contact *ct[100];
    cout << "Nhap so luong danh ba: " ; cin >> n;
    cin.ignore();

    for (int i = 0; i< n ; i++) {
        ct[i] = new contact;
        cout <<"Nhap thong tin danh ba thu " << i+1 << endl;
        cout <<"Nhap ten danh ba: "; getline(cin, ct[i]->ten);
        cout <<"Nhap dia chi danh ba: "; getline(cin, ct[i]->diachi);
        cout <<"Nhap so dien thoai nha:  "; getline (cin, ct[i]->dtnha);
        cout <<"Nhap so dien thoai di dong:  "; getline (cin, ct[i]-> dtdd);
    }
    cout << "Thong tin trong danh ba: " << endl;
    for (int i = 0; i<n; i++) {
        cout << left << setw (25) << ct[i]->ten << "||" << setw(20) << ct[i]->diachi << "||" <<setw(15) << ct[i]->dtnha<< "||" << setw(15) << ct[i] ->dtdd << endl;
    }

    string tencantim;
    bool c= false;
    cout << "Nhap ten can tim: "; 
    cin.ignore(); 
    getline(cin,tencantim);

    for (int i = 0; i<n; i++) {
        if (tencantim == ct[i]->ten) {
            cout << "co ten trong danh ba";
        } 
        if (c == false) {
            cout << "Deo co ten trong danh ba";
        }
    }

}

