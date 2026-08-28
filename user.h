#pragma once

#include <string>

class User {
    private:
        int accountNumber;
        std::string name;
        int pin;
        double balance;

    public:
        User(int accNum, std::string name,int pin,double balance);

        void setName(std::string name);
        void setPin(int pin);
        void deposit(double amount);
        void withdraw(double amount);   

        int getAccountNumber() const;
        std::string getName() const;
        int getPin() const;
        double getBalance() const;
};