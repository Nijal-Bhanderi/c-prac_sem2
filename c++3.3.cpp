/* c++ practical 3.3
Programmer name- NIJAL BHANDERI 24CE009
AIM -bank management system
date -3 march 25*/

#include <iostream>

using namespace std;

class bank
{
    string acc_name;
    int acc_number;
    double total_balance;
    static int total_acc;

public:
    static int total_account()
    {
        return total_acc;
    }

    void create_acc(string name, int number, double bal)
    {
        acc_name = name;
        acc_number = number;
        total_balance = bal;
        total_acc++;
    }

    void update_acc(int id)
    {
        string name;
        double bal;
        if (acc_number == id)
        {
            cout << "Enter new name: ";
            cin >> name;
            cout << "Enter the new initial balance: ";
            cin >> bal;
            acc_name = name;
            total_balance = bal;
        }
        else
        {
            cout << "Wrong ID" << endl;
        }
    }

    void deposit(int id)
    {
        double dep;
        cout << "Enter the amount you want to deposit: ";
        cin >> dep;
        if (acc_number == id)
        {
            if (dep > 0)
            {
                total_balance += dep;
                cout << "Deposited $" << dep << " successfully." << endl;
            }
            else
            {
                cout << "Invalid deposit amount." << endl;
            }
        }
    }

    void withdraw(int id)
    {
        double with;
        cout << "Enter the amount you want to withdraw: ";
        cin >> with;
        if (acc_number == id)
        {
            if (with > 0)
            {
                total_balance -= with;
                cout << "Withdrawn $" << with << " successfully." << endl;
            }
            else
            {
                cout << "Invalid withdrawal amount." << endl;
            }
        }
    }

    void display()
    {
        cout << "NAME: " << acc_name << endl;
        cout << "ACCOUNT NUMBER: " << acc_number << endl;
        cout << "BALANCE: " << total_balance << endl;
    }
};

int bank::total_acc = 0;

int main()
{
    bank b;
    string name;
    int no;
    double balance;
    int n, i;
    int id;
    char a;

    while (true)
    {
        cout << "Press the number to perform you want: 1.Create account | 2.Update details | 3.Withdraw | 4.Deposit | 5.Display | 6.Exit" << endl;
        cin >> n;

        switch (n)
        {
        case 1:
        {
            int count;
            cout << "How many accounts do you want to add: ";
            cin >> count;
            for (i = 0; i < count; i++)
            {
                cout << "Enter name: ";
                cin >> name;
                cout << "Enter Account number: ";
                cin >> no;
                cout << "Enter the initial balance: ";
                cin >> balance;
                b.create_acc(name, no, balance);
            }
            break;
        }

        case 2:
            cout << "Enter the account number you want to update: ";
            cin >> id;
            b.update_acc(id);
            break;

        case 3:
            cout << "Enter the account number you want to withdraw from: ";
            cin >> id;
            b.withdraw(id);
            break;

        case 4:
            cout << "Enter the account number you want to deposit into: ";
            cin >> id;
            b.deposit(id);
            break;

        case 5:
            cout << "Displaying the details:" << endl;
            b.display();
            break;

        case 6:
            cout << "Are you sure you want to exit? (Y/N): ";
            cin >> a;

            // **Fix the infinite loop issue**
            cin.clear(); // Clears any error flag


            if (a == 'Y' || a == 'y')
            {
                cout << "Exiting the system." << endl;
                cout << "Total accounts created: " << bank::total_account() << endl;
                return 0;
            }
            else if (a == 'N' || a == 'n')
            {
                cout << "Returning to menu..." << endl;
            }
            else
            {
                cout << "Oops! Wrong choice" << endl;
            }
            break;

        default:
            cout << "Oops! Invalid number." << endl;
            break;
        }
    }
    cout<<"Nijal bhanderi 24ce009"<<endl;
    return 0;
}
