#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<double> balance={10000.0}; 
    int choice;
    double amount; 
    cout<<"==================="<<endl;
    cout<<"Welcome to the ATM!"<<endl;
    cout<<"==================="<<endl;
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

            cout<<"Your balance is: "<<balance.back()<<endl;
            break;
        case 2:
            cout<<"Enter amount to deposit: ";
            cin>>amount;
            if(amount <= 0){
                cout<<"Invalid amount!"<<endl;
            }
            else{
                balance.push_back(balance.back() + amount);
                cout<<"Deposit successful! Your new balance is: "<<balance.back()<<endl;
            }
            break;
        case 3:
            cout<<"Enter amount to withdraw: ";
            cin>>amount;
            if(amount <=0){
                cout<<"Invalid amount!"<<endl;
            }
            else if(amount>balance.back()){
                cout<<"Insufficient balance!"<<endl;
            }
            else{
                balance.push_back(balance.back() - amount);
                cout<<"Withdrawal successful! Your new balance is: "<<balance.back()<<endl;
            }
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
}