#include <iostream>

using namespace std;

int main () {
    int thang;

    cout << "Nhap thang: "; cin >> thang;

    if (thang ==1 || thang ==3 || thang == 5  || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
        cout << "Thang " << thang << " co 31 ngay" << endl;
    }
    else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        cout << "Thang " << thang << " co 30 ngay" << endl;
    }
    else if (thang == 2) {
        cout << "Thang " << thang << " co 28 hoac 29 ngay" << endl;
    }
    else {
        cout << "Khong hop le" << endl;
    }
    return 0;
}