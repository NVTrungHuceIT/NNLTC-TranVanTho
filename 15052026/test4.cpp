#include <iostream>

using namespace std;

class Date {
    private :
    int ngay;
    int thang;
    int nam;

    public:
    Date () {
        this -> ngay = 1;
        this -> thang = 1;
        this -> nam =  2001;
    } 

    void init (int d, int m, int y) {
        d = ngay;
        m = thang;
        y = nam;
    }

}