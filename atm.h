#pragma once

#include <vector>
#include "user.h"
#include "userRepo.h"

class Atm {
    private:
        std::vector<User> users;
        userRepo repo;

    public:
        Atm();
        ~Atm();

        int createAccount();
        User* login(int accNum, int pin);
        void save();
};