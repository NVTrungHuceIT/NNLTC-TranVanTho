#include <iostream>
#include <string>

using namespace std;

class HeartRate {
private:
    string ten;
    int ngay;
    int thang;
    int nam;

public: 
    HeartRate(int tuoi) {
        this->ten = "";
        this->ngay = 0;
        this->thang = 0;
        this->nam = 0;
    }

    void getage() {
        cout << "Nhap ngay thang nam sinh" << endl;
        cin >> ngay >> thang >> nam;
    }

    void getMaximumHeartRate() {
        int tuoi = 2026 - nam;
        int maxhr = 220 - tuoi;
        cout << "Nhip tim toi da la: " << maxhr << endl;
    }

    void gettargetMinHeartRate() {
        int tuoi = 2026 - nam;
        int minthr = (220 - tuoi) * 0.5;
        cout << "Nhip tim muc tieu toi thieu la: " << minthr << endl;
    }

    void gettargetMaxHeartRate () {
        int tuoi = 2026 - nam;
        int maxthr = (220-tuoi) *0.85;
        cout << "Nhip tim muc tieu toi da la: " << maxthr << endl;
    }
    
};

int main () {
    HeartRate hr(0);
    hr.getage();
    hr.getMaximumHeartRate();
    hr.gettargetMinHeartRate();
    hr.gettargetMaxHeartRate();
    return 0;
}