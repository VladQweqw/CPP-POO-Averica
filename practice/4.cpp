#include <iostream>
using namespace std;

class BankAccount {
    private: 
        int account_nr;
        float balance;
    
    public:
        BankAccount(int Account_nr, float Balance) {
            account_nr = Account_nr;
            balance = Balance;
        };

        void deposit(float value_to_deposit) {
            balance += value_to_deposit;
        };

        void withdraw(float value_to_withdraw) {
            balance -= value_to_withdraw;
        };


        void summary() {
            cout<<"Balance: "<<balance<<'\n';
        }

};

int main() {
    BankAccount cont(112, 12334.0);
    cont.summary();

    cont.deposit(100);
    cont.summary();

    cont.withdraw(1254.3);
    cont.summary();

};