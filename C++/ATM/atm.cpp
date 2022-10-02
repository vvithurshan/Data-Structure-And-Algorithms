#include <iostream>
using namespace std;

void showMenu(){
    cout << "************************"<<endl;
    cout << "**********MENU**********" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit"<<endl;
    cout << "************************" << endl;

}
int main(){
    //check balance, deposit, withdraw, show menu
    int option;
    double balance = 500;
        do{
        showMenu();
        cout <<"Option: ";
        cin >> option;
        system("cls");
        switch(option){
            case 1:
                cout << "Balance is: $" << balance <<endl;
                break;
            case 2:
                cout << "Deposit Amount: " << endl;
                double depositeAmount;
                cin >> depositeAmount;
                balance += depositeAmount;
                cout << "Deposited Amount is $" << depositeAmount << " your balance is $" << balance << endl;
                break;
            case 3:
                cout << "Withdraw Amount: " << endl;
                double withdrawAmount;
                cin >> withdrawAmount;
                if(withdrawAmount <= balance){
                    balance -= withdrawAmount;
                    cout << "$" << withdrawAmount << " has been withdrawn." << endl;
                    cout << "your balance is $" << balance << endl;
                }
                else
                    cout << "Your balance is $" << balance << " you cannot withdraw" << endl; 
                break;  
        }
    }
    while(option != 4);

    cout <<endl<<"***********************************************" << endl;
    cout << "**********Thank you for being with us**********"<<endl;
    return 0;
}