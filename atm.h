#ifndef ATM_H
#define ATM_H
#include <vector>
#include "user.h"
using namespace std;
class Atm{
    private:
        vector<User> users;
    public:
        Atm();
        int createAccount();
        User* login(int accNum,int pin);
    
};
#endif