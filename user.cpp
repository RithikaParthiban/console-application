#include <iostream>
#include "user.h"

User::User(int accNum, std::string name, int pin, size_t balance) : 
    accountNumber(accNum), name(name), pin(pin), balance(balance) {}
    
void User::setName(std::string name) { this -> name = name; }

void User::setPin(int pin) { this -> pin = pin; }

void User::deposit(size_t amount) {
    if(amount <= 0) {
        std::cout << "Invalid amount!" << std::endl;
        return;
    }
    balance+=amount;
    std::cout << "Deposit successful!Your new balance is: " << balance << std::endl;
    std::cout << "=========================================" << std::endl;
}

void User::withdraw(size_t amount) {
    if(amount <= 0) {
        std::cout << "Invalid amount!" << std::endl;
        return;
    }
    if(amount > balance) {
        std::cout << "Insufficient balance!" << std::endl;
        return;
    }
    balance -= amount;
    std::cout<<"Withdrawal successful!Your new balance is: " << balance << std::endl;
}

int User::getAccountNumber() const { return accountNumber; }

std::string User::getName() const { return name; }

int User::getPin() const { return pin; }

size_t User::getBalance() const { return balance; }