/* 2.4 c++
Name of programmer-Nijal Bhanderi 24ce009
Aim-dmart system using initail and default parameters
Date-25 feb*/
#include <iostream>
#include <iomanip> // For setw()

using namespace std;
#define Max 50

class Product_Info {
    int Pro_ID;
    string Pro_Name;
    int Pro_quantity;
    int Pro_price;
    int UserPro_quantity = 0;
    int TotalPrice = 0;

public:
    void Add_Product() {
        cout << "New Product Add Portal" << endl
             << endl;
        cout << "Enter ID of the Product: ";
        cin >> Pro_ID;
        cout << "Enter name of the Product: ";
        getline(cin, Pro_Name);
        cout << "Enter Quantity of the Product: ";
        cin >> Pro_quantity;
        cout << "Enter Price of the Product: ";
        cin >> Pro_price;
    }

    int SearchId(int id) {
        return (id == Pro_ID);
    }

    void Update() {
        cout << "Update Product Stock" << endl
             << endl;
        int NewQuantity;
        cout << "Enter new stock quantity: ";
        cin >> NewQuantity;
        Pro_quantity += NewQuantity;
    }

    void DisplayStockDetail() {
        cout << left << setw(15) << Pro_ID
             << setw(15) << Pro_Name
             << setw(15) << Pro_quantity
             << setw(15) << Pro_price << endl;
    }

    void AddQuantity() {
        if (Pro_quantity > 0) {
            UserPro_quantity++;
            Pro_quantity--;
            TotalPrice = Pro_price * UserPro_quantity;
        } else {
            cout << "Product is not available" << endl;
        }
    }

    int GetTotalPrice() {
        return TotalPrice;
    }

    void DisplayBill() {
        if (UserPro_quantity > 0) {
            cout << left << setw(15) << Pro_ID
                 << setw(15) << Pro_Name
                 << setw(15) << UserPro_quantity
                 << setw(15) << TotalPrice << endl;
        }
    }
};

int main() {
    int Choice1, Choice2, Choice3, NoOfProduct = 0, Id, GrandTotal = 0, BillId = 1001;
    char Choice4, Choice5;
    Product_Info Product[Max];

MainMenu:
    cout << "Welcome to DMart" << endl;
    cout << "Press 1.Stock" << endl;
    cout << "Press 2. Buying item" << endl;
    cout << "Press 0. Exit" << endl;
    cout << "Enter your choice here: ";
    cin >> Choice1;

    if (Choice1 == 1) {
    StockMenu:
        cout << endl
             << endl
             << "Stock Management Portal" << endl;
        cout << "Press 1. Add new product" << endl;
        cout << "Press 2. Update Stock Quantity" << endl;
        cout << "Press 3. Display stock details" << endl;
        cout << "Press 0. Back to Main Menu" << endl;
        cout << "Enter your choice: ";
        cin >> Choice2;

        switch (Choice2) {
        case 1:
        ManagerMenu:
            Product[NoOfProduct].Add_Product();
            NoOfProduct++;
            cout << "If you want to add another item press y else n: ";
            cin >> Choice5;
            if (Choice5 == 'y') {
                goto ManagerMenu;
            } else {
                goto StockMenu;
            }
        case 2:
        StockUpdate:
            cout << "Enter ID of the product: ";
            cin >> Id;
            for (int i = 0; i < NoOfProduct; i++) {
                if (Product[i].SearchId(Id)) {
                    Product[i].Update();
                    goto StockMenu;
                }
            }
            cout << "Invalid ID! Try again." << endl;
            goto StockUpdate;
        case 3:
            cout << "Stock Details" << endl;
            cout << left << setw(15) << "Product ID"
                 << setw(15) << "Name"
                 << setw(15) << "Quantity"
                 << setw(15) << "Price" << endl;
            for (int i = 0; i < NoOfProduct; i++) {
                Product[i].DisplayStockDetail();
            }
            system("PAUSE");
            goto StockMenu;
        case 0:
            goto MainMenu;
        default:
            cout << "Invalid choice! Try again." << endl;
            goto StockMenu;
        }
    } else if (Choice1 == 2) {
    PurchaseMenu:
        cout << endl
             << endl
             << "Welcome to Bill Portal" << endl
             << endl;
        cout << "Press 1. Buy product" << endl;
        cout << "Press 2. Display Bill details" << endl;
        cout << "Press 0. Back to Main Menu" << endl;
        cout << "Enter your choice here: ";
        cin >> Choice3;

        switch (Choice3) {
        case 1:
            if (NoOfProduct == 0) {
                cout << "No stock available at the moment!" << endl;
                system("PAUSE");
                goto PurchaseMenu;
            }

        User:
            cout << "Enter Product ID: ";
            cin >> Id;
            for (int i = 0; i < NoOfProduct; i++) {
                if (Product[i].SearchId(Id)) {
                    Product[i].AddQuantity();
                    cout << "If you want to add another item press y else n: ";
                    cin >> Choice4;
                    if (Choice4 == 'y') {
                        goto User;
                    } else {
                        goto PurchaseMenu;
                    }
                }
            }
            cout << "Invalid ID! Try again." << endl;
            goto User;

        case 2:
            cout << "DMart" << endl;
            cout << "Bill ID: " << BillId << endl;
            cout << left << setw(15) << "Product ID"
                 << setw(15) << "Name"
                 << setw(15) << "Quantity"
                 << setw(15) << "Total Price" << endl;

            for (int i = 0; i < NoOfProduct; i++) {
                Product[i].DisplayBill();
                GrandTotal += Product[i].GetTotalPrice();
            }

            cout << left << setw(45) << "Grand Total: " << GrandTotal << endl;
            cout << " Thanks For Visiting" << endl;
            cout << endl
                 << "Nijal Bhanderi 24CE009" << endl;
            system("PAUSE");
            goto PurchaseMenu;

        case 0:
            goto MainMenu;

        default:
            cout << "Invalid choice! Try again." << endl;
            goto PurchaseMenu;
        }
    } else if (Choice1 == 0) {
        cout << "Exiting the program..." << endl;
            cout << endl
                 << "Nijal Bhanderi 24CE009" << endl;
        return 0;
    } else {
        cout << "Invalid choice! Try again." << endl;
        goto MainMenu;
    }
}
