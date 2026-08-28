#pragma once

#include <string>
#include <vector>
#include"user.h"

class userRepo {
    private:
        std::string filename;

    public:
        userRepo(const std::string& filename);
        
        void save(const std::vector<User>& users);
        std::vector<User> load();
};