#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a=0;
    a= sqrt(3 + sqrt(3 + sqrt (3)));
    cout << fixed << setprecision(2);
    cout << "Ket qua la: " << a << endl;
    return 0;
}