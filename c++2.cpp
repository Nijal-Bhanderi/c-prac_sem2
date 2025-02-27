//14th feb

#include <iostream>
using namespace std;

class rectangle
{
    int length,width;
public:

 void display_dimension(double l , double w){
     length=l;
     width=w;

}

 double getArea() {
    return length * width;
}

double getPerimeter() {
    return 2 * (length + width);

}
};

int main() {
    rectangle r1,r2;


    r1.display_dimension(20,40);
    cout << "\nRectangle 1:" << endl;
    cout << "Area: " << r1.getArea() << endl;
    cout << "Perimeter: " << r1.getPerimeter() << endl;

    r2.display_dimension(20,30);
    cout << "\nRectangle 2:" << endl;
    cout << "Area: " << r2.getArea() << endl;
    cout << "Perimeter: " << r2.getPerimeter() << endl;


    return 0;
}
