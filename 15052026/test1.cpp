#include <iostream>

using namespace std;

class Account {
private:
    int balance;
    // removed unused members that conflicted with method names

public:
    Account (int initialBalance) {
        if (initialBalance >= 0) {
            balance = initialBalance;
        }else {
            balance = 0;
            cout << "So du khong hop le" <<endl;
        }
    }
    
    void credit (int addmoney) {
        balance += addmoney;
    }

    void debit (int removemoney) {
        if (removemoney <= balance) {
            balance -= removemoney;
        } else {
            cout << "May bi do a, may lam deo co tien ma rut lam the ???"<< endl;
        }
    }

    int getbalance() {
        return balance;
    }
};

int main (){
    Account acc1 (500);
    cout << "So du tai khoan la: " << acc1.getbalance();

    Account acc2 (-500);
    cout << "So du tai khoan la: " << acc2.getbalance();
    acc1.credit(500);
    cout << "so du hien tai: " << acc1.getbalance();
    acc2.credit(600);
    cout << "so du hien tai: " << acc2.getbalance();

    return 1;
}