#include "atm.h"
#include <iostream>

Atm::Atm() : repo("users.bin"){
    users=repo.load();
}

int Atm::createAccount(){
    std::string name;
    int pin;

    std::cout<<"Enter your name: "<<std::endl;
    std::cin>>name;

    std::cout<<"Enter your PIN: "<<std::endl;
    std::cin>>pin;

    int accNum=1000+users.size()+1;
    User newUser(accNum,name,pin,0.0);
    users.push_back(newUser);
    repo.save(users);
    return accNum;
}

User* Atm::login(int accNum,int pin){
    for(size_t i=0;i<users.size();i++){
        if(users[i].getAccountNumber()==accNum && users[i].getPin()==pin){
            return &users[i];
        }
    }
    return nullptr;
}

void Atm::save() {
    repo.save(users);
}

Atm::~Atm() { repo.save(users); }