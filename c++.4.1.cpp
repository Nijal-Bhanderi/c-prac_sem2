/* c++ practical 4.1
Programmer name- NIJAL BHANDERI 24CE009
AIM -single inheritance for calculating circle areas
date -21 march 25*/
//private is passed in inheritance but to access we have to use public or private function of that class.

#include<iostream>
using namespace std;
 class shape{
protected:
     int r;
public:
    void f(){
     cout<<"Enter the radius of circle:";
     cin>>r;
     cout<<"the radius r :"<<r<<endl;
    }
 };
 class circle:private shape{
     float area;
public:
    void g(){
        f();
        area=3.14*r*r;
        cout<<"the area of circle is:"<<area<<endl;
    }

 };

 int main(){
     circle c;
     c.g();
     cout<<"NIJAL BHANDERI 24CE009";


 }
