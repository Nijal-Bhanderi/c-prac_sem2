/*practical-3.1 c++
Name of the programmer-Nijal bhanderi 24ce009
Aim-using default constructor
Date-3 feb*/
#include <iostream>
#include <iomanip>
using namespace std;

class payroll
{
    string emp_name;
    int emp_id;
    int basic_salary;
    int bonus;
    double total_salary;

public:
    void display();
    inline double total()
    {
        total_salary = basic_salary + bonus;
        return total_salary;
    }

    // Constructor with default parameters
    payroll(string name, int id, int salary, int emp_bonus = 1000)
    {
        emp_name = name;
        emp_id = id;
        basic_salary = salary;
        bonus = emp_bonus;      // Corrected: store bonus in the 'bonus' member variable
        total_salary = total(); // Now calculate the total salary using the total() function
    }
};
void payroll::display()
{
    cout << setw(10) << "-----EMPLOYEE INFORMATION-----" << endl;
    cout << "Employee: " << emp_name << endl;
    cout << "ID: " << emp_id << endl;
    cout << "Basic Salary: " << basic_salary << endl;
    cout << "Bonus: " << bonus << endl;
    cout << "Total Salary: " << total_salary << endl;
}

int main()
{
    payroll p();
    int n, i;
    string Name;
    int ID;
    int basic;
    int bonus_emp;

    cout << "Enter the number of people information you want to enter: ";
    cin >> n;
    cout << endl;

    for (i = 0; i < n; i++)
    {
        cout << left << setw(10) << "---EMPLOYEE " << i + 1 << " DETAILS---" << endl;
        cout << "Enter name: ";
        cin >> Name;
        cout << endl;
        cout << "Enter ID: ";
        cin >> ID;
        cout << endl;
        cout << "Enter your regular salary: ";
        cin >> basic;
        cout << endl;
        cout << "Enter received bonus (if extra-regular, bonus is excluded): ";
        cin >> bonus_emp;
        cout << endl;

        payroll p(Name, ID, basic, bonus_emp);
        p.display();
    }
    cout << endl<< "Nijal Bhanderi 24CE009" << endl;
    return 0;
}
