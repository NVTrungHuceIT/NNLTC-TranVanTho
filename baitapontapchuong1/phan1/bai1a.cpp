#include <iostream>
#include <iomanip>


using namespace std;

int main () {
    double a=0, b=0, c=0;

    cout  <<  "Nhap ba so a b c: ";
    cin >> a >> b >> c;

    cout << fixed << setprecision(2);
    cout << a <<"x^2 + " << b <<"x - " << c << endl;
    return 0;
}