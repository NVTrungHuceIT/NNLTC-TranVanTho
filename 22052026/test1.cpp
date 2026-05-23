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
    struct contact *ct[100];
    int n;
    cout << "Nhap so luong danh ba: " ; cin >> n;
    for (int i = 0; i< n ; i++) {
        ct[i] = new  struct contact;
        cout <<"Nhap thong tin danh ba thu " << i+1 << endl;
        cout <<"Nhap ten danh ba: ";
        cin.ignore(); getline(cin, ct[i]->ten);
        cout <<"Nhap dia chi danh ba: "; 
        getline(cin, ct[i]->diachi);
        cout <<"Nhap so dien thoai nha:  "; 
        cin >> ct[i]->dtnha;
        cout <<"Nhap so dien thoai di dong:  "; 
        cin >> ct[i]-> dtdd;
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
    for (int i = 0; i<n; i++) 
    {
        if(tencantim == ct[i]->ten) 
        {
            c = true;
            cout << "true";
        }
    }
    
    if (c==false) cout << "false";
    

}

