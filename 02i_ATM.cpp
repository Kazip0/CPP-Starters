#include<iostream>
using namespace std;

void showMenu()
{
    cout << "*******MENU*******" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "******************" << endl;
}


int main()
{
    
    int option;
    double balance = 1000.00, deposit;
    
    
    do
    {
    showMenu();
    cout << "Option: ";
    cin >> option;
    
        switch (option)
        {
            case 1: cout << "Your balance is: ₹" << balance << endl;
            break;
                    
            case 2: cout << "How much do you want to deposit?" << endl;
                    cin >> deposit;
                    balance += deposit;
            break;
            
            case 3: cout << "How much do you want to withdraw?" << endl;
                    cin >> deposit;
                    balance -= deposit;
            break;
            
        }
    
    }while(option !=4);
    
}
