#include "userRepo.h"
#include <iostream>
#include <fstream>
#include <string>

userRepo::userRepo(const std::string& filename) : filename(filename) {}

void userRepo::save(const std::vector<User>& users) {
    std::ofstream file(filename, std::ios::binary | std::ios::trunc);
    if(!file.is_open()) {
        std::cerr<<"Error opening the file!";
        return;
    }

    size_t size = users.size();
    file.write(reinterpret_cast<const char*>(&size),sizeof(size_t));  

    for(size_t i = 0; i < size; ++i){
        const User& user = users[i];
        int accNum=user.getAccountNumber();
        std::string name=user.getName();
        int pin=user.getPin();
        size_t balance=user.getBalance();

        file.write(reinterpret_cast<const char*>(&accNum),sizeof(accNum));

        size_t length=name.length();
        file.write(reinterpret_cast<const char*>(&length),sizeof(length));
        file.write(reinterpret_cast<const char*>(name.data()),length);

        file.write(reinterpret_cast<const char*>(&pin),sizeof(pin));

        file.write(reinterpret_cast<const char*>(&balance),sizeof(balance));
    }

    file.close();
}   

std::vector<User> userRepo::load() {
    std::vector<User> users;
    std::ifstream file(filename,std::ios::binary | std::ios::in);
    if(!file.is_open()){
        std::cout << "Error opening the file" << std::endl;
        return users;
    }

    size_t size;
    file.read(reinterpret_cast<char*>(&size),sizeof(size_t));
    
    for(size_t i = 0; i < size; ++i){
        int accNum,pin;
        std::string name;
        size_t length;
        size_t balance;

        file.read(reinterpret_cast<char*>(&accNum),sizeof(accNum));

        file.read(reinterpret_cast<char*>(&length),sizeof(length));
        name.resize(length);

        file.read(reinterpret_cast<char*>(name.data()),length);

        file.read(reinterpret_cast<char*>(&pin),sizeof(pin));

        file.read(reinterpret_cast<char*>(&balance),sizeof(balance));

        User newUser(accNum,name,pin,balance);
        users.push_back(newUser);
    }

    file.close();
    return users;
}