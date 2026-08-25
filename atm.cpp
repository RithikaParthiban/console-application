#include "atm.h"
#include <iostream>
using namespace std;
    Atm::Atm(){}
    int Atm::createAccount(){
        string name;
        int pin;
        cout<<"Enter your name: "<<endl;
        cin>>name;
        cout<<"Enter your PIN: "<<endl;
        cin>>pin;
        int accNum=1000+users.size()+1;
        User newUser(accNum,name,pin,0.0);
        users.push_back(newUser);
        return accNum;
    }
    User* Atm::login(int accNum,int pin){
        for(int i=0;i<users.size();i++){
            if(users[i].getAccountNumber()==accNum && users[i].getPin()==pin){
                return &users[i];
            }
        }
        return nullptr;
    }