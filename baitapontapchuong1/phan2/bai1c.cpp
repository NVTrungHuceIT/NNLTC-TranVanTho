#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;

    if (c >= '0' && c <= '9') {
        cout << "Ky tu la chu so";
    } else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        cout << "Ky tu la chu cai";
    } else {
        cout << "Ky tu khong phai chu so hoac chu cai";
    }

    return 0;
}
//xong
