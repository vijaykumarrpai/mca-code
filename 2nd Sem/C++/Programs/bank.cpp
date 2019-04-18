#include <iostream>
#include <cstring>
using namespace std;

class Bank
{   
    public:
        char name[20];
        char account_no[20];
        char type[10];
        float bal;

        Bank()
        {
            bal = 0;
        }

        void deposit();
        void withdraw();
        void balance();
};

void Bank::deposit()
{
    float amount;

    cout << "Enter the amount to deposit: " << endl;
    cin >> amount;
    
    bal = bal + amount;
    cout << "Amount " << amount << " deposited" << endl;
}

void Bank::withdraw()
{
    float amount;

    cout << "Enter the amount to withdraw: " << endl;
    cin >> amount;

    if(bal < amount){
        cout << "Insufficient Balance.." << endl;
    }
    else
    {
        bal = bal - amount;
        cout << "Amount " << amount << " withdrawn" << endl;
    }
}

void Bank::balance()
{
    cout << "Balance = " << bal << endl;
}

int main()
{
    Bank customers[20];
    int n;
    cout << "Enter no of customers: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter customer " << i + 1 << " details: " << endl;
        cout << "Enter name: " << endl;
        cin >> customers[i].name;
        cout << "Enter account number: " << endl;
        cin >> customers[i].account_no;
        cout << "Enter account type: " << endl;
        cin >> customers[i].type;
    }

    int choice;
    char acc_num[20];

    while(1)
    {
        cout << "Enter what operation to be performed: " << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Balance" << endl;
        cout << "4. Exit"<< endl;
        cin >> choice;
        
        if(choice == 0)
        {
            break;
        }

        cout << "Enter account no: " << endl;
        cin >> acc_num;

        switch(choice)
        {
            case 1:
                for (int i = 0; i < n; i++)
                {
                    if (!strcmp(acc_num, customers[i].account_no))
                    {
                        customers[i].deposit();
                        break;
                    }
                }
                break;
            case 2:
                for (int i = 0; i < n; i++)
                {
                    if (!strcmp(acc_num, customers[i].account_no))
                    {
                        customers[i].withdraw();
                        break;
                    }
                }
                break;
            case 3:
                for (int i = 0; i < n; i++)
                {
                    if (!strcmp(acc_num, customers[i].account_no))
                    {
                        customers[i].balance();
                        break;
                    }
                }
                break;
            case 4:exit(0);
            default: 
                cout << "Invalid option.." << endl;
        }
    }
}