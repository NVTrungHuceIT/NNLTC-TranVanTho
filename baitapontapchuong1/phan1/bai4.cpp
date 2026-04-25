#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

struct Nhanvien {
    string hoten;  
    double sr, a, si;
    double BS= 1050000 , ICP1 = 0.05, ICP2 = 0.1, T1 = 4000000, T2 = 9000000;
};

int main () {
    Nhanvien nv;
    cout << "*********************************************************" << endl;
    cout << "Ho ten: "; getline(cin, nv.hoten);
    cout << "He so luong: "; cin >> nv.sr;
    cout << "He so phu cap: "; cin >> nv.a;
    cout << "He so bao hiem xa hoi: "; cin >> nv.si;
    
    cout << "----------------------------------------------" << endl;
    double salary = nv.sr * nv.BS;
    cout << "Salary = " << salary << endl;
    double allowance = salary * ((nv.a)/100);
    cout << "Phu cap = " << allowance << endl;
    double bhxh = salary * ((nv.a)/100);
    cout << "Bao hiem xa hoi = " << bhxh  << endl;
    double ibt = salary + allowance - bhxh;
    cout << "Thu nhap truoc thue: " << ibt << endl;

    if (ibt <= nv.T1) {
        double tax = 0;
        cout << "Thu nhap sau thue: " << ibt - tax << endl;
    }

    else if (ibt > nv.T1 && ibt < nv.T2) {
        double tax = nv.ICP1 * (ibt/100);
        cout << "Thu nhap sau thue: " << ibt - tax << endl;
    }
    
    else {
        double tax = nv.ICP2;
        cout << "Thu nhap sau thue: " << ibt - tax << endl;
    }

    return 0;

}