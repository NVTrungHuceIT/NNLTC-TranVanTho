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
        cin.ignore();
        cout << "Nhap ho ten: "; getline(cin, ht);
        diem =  new float [somon];

        for (int i = 0; i< somon; i++) {
            cout << "Nhap diem mon thu " << i+1 <<": ";
            cin >> diem[i];
        }
    }

    void tinhdtb (int somon) {
        float tong = 0;
        for (int i = 0; i<somon; i++) {
            tong += diem[i];
        }
        *dtb = tong/somon;
    }

    float getdtb() {
        return *dtb;
    }
    void xuat() {
        cout << "Diem tb la: " << *dtb;
    }

};

int main () {
    int soSV, somon;

    cout << "Nhap so luong sinh vien: ";
    cin >> soSV;
    cout << "Nhap so mon hoc cua moi sinh vien: ";
    cin >> somon;

    SinhVien* ds[100];

    for (int i = 0; i < soSV; i++) {
        cout << "\nSinh vien thu " << i + 1 << ":" << endl;
        ds[i] = new SinhVien(); 
        
        ds[i]->input(somon);     
        ds[i]->tinhdtb(somon);  
    }

    for (int i = 0; i < soSV - 1; i++) {
        for (int j = i + 1; j < soSV; j++) {
            if (ds[i]->getdtb() < ds[j]->getdtb()) {
                SinhVien* temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }

    cout << "\n=== DANH SACH SINH VIEN (GIAM DAN THEO DTB) ===" << endl;
    for (int i = 0; i < soSV; i++) {
        cout << i + 1 << ". ";
        ds[i]->xuat();
    }

    for (int i = 0; i < soSV; i++) {
        delete ds[i]; 
    }

    return 0;
}