#include <iostream>
using namespace std;

void showMenu() {
    cout<<"**********Menu*********"<<endl;
    cout<<"1. Check Balance"<<endl;
    cout<<"2. Deposit"<<endl;
    cout<<"3. Withdraw"<<endl;
    cout<<"4. Transfer"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"**********Menu*********"<<endl;
}

int main() {
    int option;
    double balance = 500;

    do
    {
        showMenu();
    cout<<"Option: ";
    cin>>option;
    system("cls");

    switch (option)
    {
    case 1:
        cout<<"Balance is: Rs."<<balance<<endl;
    break;
    case 2:
        cout<<"Deposit amount is: ";
        double depositAmount;
        cin>>depositAmount;
        balance += depositAmount;
    break;
    case 3:
        cout<<"Withdraw amount is: ";
        double withdrawAmount;
        cin>>withdrawAmount;
        if(withdrawAmount <= balance){
        balance -= withdrawAmount;
        } else {
            cout<<"Not Enough Mony"<<endl;
        }
    break;
    case 4:
        int name;
        cout<<"On Which Account You Want To Transfer Money: (Enter Account Number Only)"<<endl;
        cin>>name;
        int transferAmount;
        cout<<"How much money do you want to give: ";
        cin>>transferAmount;
        cout<<"Are You Sure: Yes No"<<endl;
        int yes;
        cin>>yes;
        if(transferAmount <= balance){
        cout<<"Money transiction is succesful. Your balance is "<<endl;
        cout<<balance - transferAmount<<endl;
        } else {
            cout<<"Not Enough Mony"<<endl;
        }
    break;
    
    default:
        break;
    }
    } while (option!=5);
    
}