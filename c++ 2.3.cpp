/*practical-2.3 c++
Name of the programmer-Nijal bhanderi 24ce009
Aim-BANKING SYSTEM USING DEFAULT AND INITIALIZE ARGUEMENTS
Date-21 feb*/
#include<iostream>
using namespace std;

class bank{
    int account_number;
    string acc_name;
    double value;
public:
    void input(int x=0, string name="",int v=0){
        cout<<endl;
        cout<<"Enter account number:"<<endl;
        cin>>x;
        cout<<"Enter your name:"<<endl;
        cin>>name;
        cout<<"Enter the total balance:"<<endl;
        cin>>v;
        account_number=x;
        acc_name=name;
        value=v;
    }
    void deposit(double total) {
        if (total > 0) {
            value+= total;
            cout << "Deposited $" << total << " successfully." << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }
    void withdraw(double total) {
        if (total > 0) {
            value-= total;
            cout << "Withdraw $" << total << " successfully." << endl;
        } else {
            cout << "Invalid withdraw amount." << endl;
        }
    }
    void display(){
        cout<<"Account Number:"<<account_number<<endl;
        cout<<"Account Name:"<<acc_name<<endl;
        cout<<"Account's Total Balance:"<<value<<endl;

    }


};

int main(){
    bank b;
    int a,n,i,acc_number;
    string na;
    double total;
    cout<<"Select the one of the following: 1.Add Account | 2.Depositing Money | 3.Withdrawing Money"<<endl;
    cin>>n;
    switch(n){
        case 1:
            cout<<"How many accounts you want to add:"<<endl;
            cin>>a;
            for(i=0;i<a;i++){
                cout<<endl;
                cout<<"Account number:"<<i+1;
                b.input(acc_number,na);
            }
            break;
            case 2:
                cout << "Enter account number to deposit to: ";
                cin >> acc_number;
                cout << "Enter amount to deposit: ";
                cin >> total;
                b.deposit(total);
                break;
            case 3:
                cout << "Enter account number to withdraw to: ";
                cin >> acc_number;
                cout << "Enter amount to withdraw: ";
                cin >> total;
                b.withdraw(total);
                break;
            default:cout<<"oops wrong number";
    }
    cout<<endl;
    cout<<"Displaying the summary of your account:"<<endl;
    cout<<endl;
    b.display();
    cout<<endl;
    cout<<"Nijal Bhanderi 24ce009"<<endl;
}
