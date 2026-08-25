#include "user.h"
#include <iostream>
using namespace std;
    User::User(int accNum,string name,int pin,double balance){
        this->accountNumber=accNum;
        this->name=name;
        this->pin=pin;
        this->balance=balance;
    }
    int User::getAccountNumber(){
        return accountNumber;
    }
    string User::getName(){
        return name;
    }
    void User::setName(string name){
        this->name=name;
    }
    int User::getPin(){
        return pin;
    }
    void User::setPin(int pin){
        this->pin=pin;
    }
    double User::getBalance(){
        return balance;
    }
    void User::deposit(double amount){
        if(amount <= 0){
            cout<<"Invalid amount!"<<endl;
            return;
        }
        balance+=amount;
        cout<<"Deposit successful!Your new balance is: "<<balance<<endl;
    }
    void User::withdraw(double amount){
        if(amount <= 0){
            cout<<"Invalid amount!"<<endl;
            return;
        }
        if(amount>balance){
            cout<<"Insufficient balance!"<<endl;
            return;
        }
        balance-=amount;
        cout<<"Withdrawal successful!Your new balance is: "<<balance<<endl;
    }