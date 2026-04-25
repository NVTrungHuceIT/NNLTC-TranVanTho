#include <iostream>
#include <iomanip>

using namespace std;
void Swap(int &a, int &b);
int main() {
    int a =10;
    int b =5;
    Swap(a, b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}
void Swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}