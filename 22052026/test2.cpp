#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class SinhVien {
    private:
        string ht;
        float *diem;
        float *dtb;
    
    public:
    SinhVien() {
        ht = " ";
        diem = 0;
        dtb = 0;
    }
    ~SinhVien() {
        delete[] diem;
        delete[] dtb;
    }

    void input (int somon) {

    }

};

int main () {
    
}