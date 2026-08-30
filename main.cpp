#include <iostream>
#include "user.h"
#include "atm.h"
#include "userRepo.h"

int main() {
    Atm Atm;
    int accountNumber;
    int pin;
    int choice;
    size_t amount;

    std::cout << "===================" << std::endl;
    std::cout << "Welcome to the ATM!" << std::endl;
    std::cout << "===================" << std::endl;

    do {
        std::cout << "1.Login" << std::endl;
        std::cout << "2.Create Account" << std::endl;
        std::cout << "3.Exit" << std::endl;
        std::cout << "Please enter your choice: ";
        std::cin >> choice;

        switch(choice) {
            case 1: {
                std::cout << "Enter your account number: " << std::endl;
                std::cin >> accountNumber;

                std::cout << "Enter your PIN: " << std::endl;
                std::cin >> pin;

                User* currUser = Atm.login(accountNumber,pin);
                if(currUser == nullptr) {
                    std::cout << "Invalid account number or PIN!" << std::endl;
                    break;
                }

                std::cout << "Login successful!" << std::endl;
                do {
                    std::cout << "1. Check Balance" << std::endl;
                    std::cout << "2. Deposit" << std::endl;
                    std::cout << "3. Withdraw" << std::endl;
                    std::cout << "4. Delete Account" << std::endl;
                    std::cout << "5. Exit" << std::endl;
                    std::cout << "Please enter your choice: ";
                    std::cin>>choice;

                    switch (choice) {
                    case 1:
                        std::cout << "Your balance is: " << currUser->getBalance() << std::endl;
                        break;
                    case 2:
                        std::cout << "Enter amount to deposit: ";
                        std::cin >> amount;
                        currUser -> deposit(amount);
                        Atm.save();
                        break;
                    case 3:
                        std::cout << "Enter amount to withdraw: ";
                        std::cin >> amount;
                        currUser -> withdraw(amount);
                        Atm.save();
                        break;
                    case 4:
                        std::cout << "Are you sure you want to delete your account? (1 for Yes, 0 for No): ";
                        int confirm;
                        std::cin >> confirm;
                        if(confirm == 1){
                            if(Atm.deleteAccount(accountNumber,pin)){
                                std::cout << "Account deleted successfully!" << std::endl;
                            } else {
                                std::cout << "Error deleting the account!" << std::endl;
                            }
                        }
                        break;
                    case 5:
                        std::cout << "=============================" << std::endl;
                        std::cout << "Thank you for using the ATM!" << std::endl;
                        std::cout << "=============================" << std::endl;
                        break;
                    default:
                        std::cout << "Invalid choice!" << std::endl;
                    }
                } while(choice != 5);
                break;
            }
            case 2: {
                int newAccNum = Atm.createAccount();
                std::cout << "=============================" << std::endl;
                std::cout << "Account created successfully!" << std::endl;
                std::cout << "Your account number is: " << newAccNum << std::endl;
                std::cout << "=============================" << std::endl;
                break;
            }
            case 3:
                std::cout << "=============================" << std::endl;
                std::cout << "Thank you for using the ATM!" << std::endl;
                std::cout << "=============================" << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice!" << std::endl;
        }
    } while(choice != 3);
}