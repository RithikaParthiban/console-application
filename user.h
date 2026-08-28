#pragma once

#include <string>

class User {
    private:
        int accountNumber;
        std::string name;
        int pin;
        size_t balance;

    public:
        User(int accNum, std::string name,int pin,size_t balance);

        void setName(std::string name);
        void setPin(int pin);
        void deposit(size_t amount);
        void withdraw(size_t amount);   

        int getAccountNumber() const;
        std::string getName() const;
        int getPin() const;
        size_t getBalance() const;
};