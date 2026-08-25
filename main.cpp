#include <iostream>
#include "user.h"
#include "atm.h"
using namespace std;
int main() {
    Atm atm;
    int accountNumber;
    int pin;
    int choice;
    double amount;
    cout<<"==================="<<endl;
    cout<<"Welcome to the ATM!"<<endl;
    cout<<"==================="<<endl;
    do{
        cout<<"1.Login"<<endl;
        cout<<"2.Create Account"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Please enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:{
                cout<<"Enter your account number: "<<endl;
                cin>>accountNumber;
                cout<<"Enter your PIN: "<<endl;
                cin>>pin;
                User* currUser=atm.login(accountNumber,pin);
                if(currUser==nullptr){
                    cout<<"Invalid account number or PIN!"<<endl;
                    break;
                }
                cout<<"Login successful!"<<endl;
                do {
                    cout<<"1. Check Balance"<<endl;
                    cout<<"2. Deposit"<<endl;
                    cout<<"3. Withdraw"<<endl;
                    cout<<"4. Exit"<<endl;
                    cout<<"Please enter your choice: ";
                    cin>>choice;
                    switch (choice)
                    {
                    case 1:
                        cout<<"Your balance is: "<<currUser->getBalance()<<endl;
                        break;
                    case 2:
                        cout<<"Enter amount to deposit: ";
                        cin>>amount;
                        currUser->deposit(amount);
                        break;
                    case 3:
                        cout<<"Enter amount to withdraw: ";
                        cin>>amount;
                        currUser->withdraw(amount);
                        break;
                    case 4:
                        cout<<"============================="<<endl;
                        cout<<"Thank you for using the ATM!"<<endl;
                        cout<<"============================="<<endl;
                        break;
                    default:
                        cout<<"Invalid choice!"<<endl;
                    }
                }while(choice!=4);
                break;
            }
            case 2:{
                int newAccNum=atm.createAccount();
                cout<<"Account created successfully!"<<endl;
                cout<<"Your account number is: "<<newAccNum<<endl;
                break;
            }
            case 3:
                cout<<"============================="<<endl;
                cout<<"Thank you for using the ATM!"<<endl;
                cout<<"============================="<<endl;
                return 0;
            default:
                cout<<"Invalid choice!"<<endl;
        }
    }while(choice!=3);
}