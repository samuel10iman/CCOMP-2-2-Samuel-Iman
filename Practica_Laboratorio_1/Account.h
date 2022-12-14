#include <iostream>
#include <string>
using namespace std;

class Account {
public:
    Account(string accountName, int initialBalance) : name{accountName}
    { 
        if (initialBalance > 0) {
            balance = initialBalance;
        }
    }

    void deposit(int depositAmount){
        if (depositAmount > 0){
            balance = balance + depositAmount;
        }
    }

    void withdraw(int withdrawAmount){
        if (withdrawAmount > balance){
            cout << "Withdraw amount exceeded account balance";
        }
        else
        {
            balance = balance - withdrawAmount;
            cout << "withdrawing $" << withdrawAmount;
        }
    }

    int getBalance() const {
        return balance;
    }

    void setName(std::string accountName) {
        name = accountName;
    }

    std::string getName() const {
        return name;
    }
private:
    std::string name;
    int balance = 0;
};