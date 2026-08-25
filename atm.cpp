#include <bits/stdc++.h>
using namespace std;
class User{
    private:
        int accountNumber;
        string name;
        int pin;
        double balance;
    public:
        User(int accNum,string name,int pin,double balance){
            this->accountNumber=accNum;
            this->name=name;
            this->pin=pin;
            this->balance=balance;
        }
        int getAccountNumber(){
            return accountNumber;
        }
        string getName(){
            return name;
        }
        void setName(string name){
            this->name=name;
        }
        int getPin(){
            return pin;
        }
        void setPin(int pin){
            this->pin=pin;
        }
        double getBalance(){
            return balance;
        }
        void deposit(double amount){
            if(amount <= 0){
                cout<<"Invalid amount!"<<endl;
                return;
            }
            balance+=amount;
            cout<<"Deposit successful!Your new balance is: "<<balance<<endl;
        }
        void withdraw(double amount){
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
        
};
class Atm{
    private:
        vector<User> users;
    public:
        Atm(){
        }
        int createAccount(){
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
        User* login(int accNum,int pin){
            for(int i=0;i<users.size();i++){
                if(users[i].getAccountNumber()==accNum && users[i].getPin()==pin){
                    return &users[i];
                }
            }
            return nullptr;
        }
    
};
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