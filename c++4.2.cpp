/* c++ practical 4.2
Programmer name- NIJAL BHANDERI 24CE009
AIM -multilevel inheritance for employee
date -21 march 25*/
//private is passed in inheritance but to access we have to use public or private function of that class.
//constructor is called from derived class

#include <iostream>
using namespace std;

class details {
protected:
    string name;
    int age;
public:
    details(string n, int a) {
        name = n;
        age = a;
        cout << "The name of the employee is: " << name << endl;
        cout << "The age of the employee is: " << age << endl;
    }
};

class identifiers : protected details {
protected:
    int id;
public:
    identifiers(string n, int a, int iden) : details(n, a) {
        id = iden;
        cout << "The employee ID is: " << id << endl;
    }
};

class additional_details : protected identifiers {
    string department;
public:
    additional_details(string n, int a, int iden, string dep) : identifiers(n, a, iden) {
        department = dep;
        cout << "The department of the employee is: " << department << endl;
    }

    // Search for employee by ID
    void searchh(int id) {
        if (id == this->id) {
            cout << "The department is: " << department << endl;
        } else {
            cout << "Not found!!!" << endl;
        }
    }
};

int main() {
    string na, depa;
    int agee, ide;

    cout << "Enter your name: ";
    cin >> na;
    cout << endl;

    cout << "Enter your age: ";
    cin >> agee;
    cout << endl;

    cout << "Enter your ID: ";
    cin >> ide;
    cout << endl;

    cout << "Enter your department: ";
    cin >> depa;
    cout << endl;

    additional_details a(na, agee, ide, depa);

    // Explicitly search for department using the ID
    int no;
    cout<<endl;
    cout << "Enter the ID for which you want to search the department: ";
    cin >> no;
    a.searchh(no);
    cout<<endl<<"nijal bhanderi 24ce009"<<endl;

    return 0;
}
