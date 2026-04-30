#include <iostream>
#include <string>
#include <iomanip>

using namespace std; 

struct doitac {
    string ten, cqct, cv, dtdd, dtcq, dcnr, dccq, email, gc;
};

typedef struct doitac dt;

int main () {
    int n, i;
    cout << "Nhap so danh ba: "; cin >> n;

    dt db[n];
    cin.ignore();
    for (int i=0; i <n; i++) {
        cout << "Nhap thong tin danh ba thu "<< i+1 <<": " <<endl;
        cout << "nhap ten: " ; getline(cin, db[i].ten);
        cout << "Nhap cqct: "; getline(cin, db[i].cqct);
        cout << "Nhap cv: "; getline(cin, db[i].cv);
        cout << "Nhap dtdd: "; getline(cin, db[i].dtdd);
        cout << "Nhap email: "; getline(cin, db[i].email);

    }
    
    cout << "==========================================================================================================================================" << endl;
    cout << "Danh sach danh ba: " << endl;
    cout << setw(3) << "STT" << setw(20) << "Ten" << setw(20) << "CQCT" << setw(20) << "CV" << setw(15) << "DTDD" << setw(20) << "Email" << endl;
    for (int i=0; i<n; i++){
        cout << setw(3) << i+1 << setw(20) << db[i].ten << setw(20) << db[i].cqct << setw(20) << db[i].cv << setw(15) << db[i].dtdd <<setw(20) << db[i].email << endl;
    }
    string name, cq;
    cout << "Nhap ten can tim: "; getline (cin, name);
    cout << "Nhap ten co quan: ";  getline  (cin, cq);

    for (int i=0; i<n; i++){
        if (db[i].ten == name && db[i].cqct == cq) {
            cout << setw(3) << i+1 << setw(20) << db[i].ten << setw(20) << db[i].cqct << setw(20) << db[i].cv << setw(15) << db[i].dtdd <<setw(20) << db[i].email << endl;
        }
    }

    return 0;
}