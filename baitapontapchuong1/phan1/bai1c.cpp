#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
    double a;

    a = (1 / (2+ (1/ (2 + (1/2)))));
    cout << fixed << setprecision(2);
    cout << "Ket qua la: " << a << endl;
    return 0;
}