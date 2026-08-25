#ifndef USER_H
#define USER_H
#include <string>
using namespace std;
class User{
    private:
        int accountNumber;
        string name;
        int pin;
        double balance;
    public:
        User(int accNum,string name,int pin,double balance);
        int getAccountNumber();
        string getName();
        void setName(string name);
        int getPin();
        void setPin(int pin);
        double getBalance();
        void deposit(double amount);
        void withdraw(double amount);      
};
#endif