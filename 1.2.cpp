/*practical-1.2 c++
Name of the programmer-Nijal bhanderi 24ce009
Aim-super market system
Date-10 feb*/

#include <iostream>
#include <iomanip>

using namespace std;

class product
{
    int Pro_ID;
    string Pro_Name;
    int Product_Price;
    int totalprorice;
    int quantity;

public:
    void Dis_detail()
    {
        cout << left << setw(15) << Pro_Name
     << right << setw(10) << Product_Price
     << setw(10) << quantity
     << setw(15) << totalprorice << endl;

    }

    int Search_product(int id)
    {
        return (id == Pro_ID);
    }

    void Add()
    {
        quantity++;
        totalprorice = Product_Price * quantity;
        cout << "product ID " << Pro_ID << " found! Added to your basket. New quantity: " << quantity << "  Total prorice: " << totalprorice << endl;
    }

    void addproduct(int id)
    {
        cout << "New product Found!!" << endl
             << "Enter product name: ";
        cin >> Pro_Name;
        cout << "Enter product prorice: ";
        cin >> Product_Price;
        Pro_ID = id;
        quantity = 1;
        totalprorice = Product_Price;
    }

    int getTotalprorice()
    {
        return totalprorice;
    }
};

int main()
{
    product pro[50];
    int noOfproduct = 0, id, grandTotal = 0;
    char choice;

menu:
    cout << "Enter product id: ";
    cin >> id;
    bool found = false;

    for (int i = 0; i < noOfproduct; i++)
    {
        if (pro[i].Search_product(id))
        {
            pro[i].Add();
            found = true;
            break;
        }
    }

    if (!found)
    {
        pro[noOfproduct].addproduct(id);
        noOfproduct++;
    }

    cout << "If you want to add another item proress y else n: ";
    cin >> choice;
    if (choice == 'y')
    {
        goto menu;
    }
    else
    {
        cout<<"|---------------------VMart---------------------------------|"<<endl;
        cout <<endl<< "Final Bill:"<<endl;
        cout << "---------------------------------------------------"<<endl;
        cout << left << setw(15) << "Name"
        << right << setw(10) << "prorice"
        << setw(10) << "Quantity"
        << setw(15) << "Total prorice" << endl;

        cout << "---------------------------------------------------"<<endl;
        for (int i = 0; i < noOfproduct; i++)
        {

            pro[i].Dis_detail();
            grandTotal += pro[i].getTotalprorice();
        }
        cout << "---------------------------------------------------"<<endl;
        cout << left << setw(35) << "Grand Total:" << grandTotal << endl;
        cout<<endl<<"          --x--Thanks For Visiting--x--         "<<endl;
        cout<<endl<<"Nijal"<<" "<<"ID No:24CE009"<<endl;

    }
    return 0;
}
