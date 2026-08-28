#pragma once

#include <vector>
#include "user.h"
#include "userRepo.h"

class Atm {
    private:
        std::vector<User> users;
        userRepo repo;
        int nextAccountNumber = 1000;

    public:
        Atm();
        ~Atm();

        int createAccount();
        User* login(int accNum, int pin);
        void save();
        bool deleteAccount(int accNum,int pin);
};