#include <iostream>

using namespace std;

int main () {
    int nam;
    cout << "Nhap nam: "; cin >> nam;

    bool namnhuan = ((nam %4 == 0 && nam %100 != 0) || nam %400 == 0);

    if (namnhuan) {
        cout << "Nam " << nam  << " la nam nhuan" << endl;
    }
    else {
        cout << "Nam " << nam << " khong la nam nhuan" << endl;
    }
}