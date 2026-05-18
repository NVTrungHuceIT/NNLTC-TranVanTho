#include <iostream>
#include <string>

using namespace std;

class SinhVien {
    private:
        string hoten;
        string lop;
        float diemtb;
        int somon;
        float *diemmonhoc;
    public:
        SinhVien(string ht, string l, float dtb, int somon, float *dmh) {
            hoten = ht;
            lop  =  l;
            diemtb =  0.0;
            diemmonhoc= new float(somon);
        }
        ~SinhVien(){

        }
        void input() {
            cin.ignore ();
            cout << "Nhap ho va ten: "; getline (cin, hoten);
            cout <<"Nhap lop: " ; cin >> lop;
            cout <<"Nhap so mon: "; cin >> somon;

            diemmonhoc = new float (somon);
            for (int i = 1; i<= somon; i++) {
                cout << "Nhap diem mon thu " << i; cin >> diemmonhoc[i];
            }
        }




};