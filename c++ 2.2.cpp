/*practical-1.2 c++
Name of the programmer-Nijal bhanderi 24ce009
Aim-student result
Date-17 feb*/

#include<iostream>
#include<string.h>
using namespace std;

class student{
    int roll_no;
    string name;
    int m1,m2,m3;
    float avg;
public:
    void input_detail(int i=0, string n=" ",int x=0, int y=0, int z=0){
        roll_no=i;
        name=n;
        m1=x;
        m2=y;
        m3=z;
        display();
        cout<<endl;
        }
    void display(){
        cout<<"Roll number:"<<roll_no<<endl;
        cout <<"Name:"<<name<<endl;
        cout <<"Mark of subject 1:"<<m1<<endl;
        cout <<"Mark of subject 2:"<<m2<<endl;
        cout <<"Mark of subject 3:"<<m3<<endl;
    }


};

int main(){
    student s[10];
    int n,i,a,b,c,id;
    string name;
    cout<<"The specific parameters"<<endl;
    s[0].input_detail(1,"Kavisha",23,56,78);
    s[1].input_detail(2,"Nijal",24,76,98);
    s[2].input_detail(3,"prakruti",28,46,88);
    s[3].input_detail(4,"vishwa",13,46,58);
    s[4].input_detail(5,"manush",73,56,78);
    cout<<"The default parameters:"<<endl;
    s[5].input_detail();
    s[6].input_detail();
    s[7].input_detail();
    s[8].input_detail();
    s[9].input_detail();

        }

