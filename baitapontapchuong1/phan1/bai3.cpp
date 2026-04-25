#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
    char a=0; int b=0; long c=0; double d=0; float e=0;

    cout << "Nhap a b c d e: ";
    cin >> a >> b >> c >> d >> e;
    
    if  (((a+b)/2 >c) && ((b-a)/2 < c)) {
        e = d;
    }
    else {
        e = a+b;
    }
    cout << "**************************************************" << endl;
    cout <<  "                Value table                      " << endl;
    cout << setw (8)<< left << "a = " << a << endl;
    cout << setw (8)<< left << "b = " << b << endl;
    cout << setw (8)<< left << "c = " << c << endl;
    cout << setw (8)<< left << "d = " << d << endl;
    cout << setw (8)<< left << "e = " << e << endl;
}