/* c++ practical 3.2
Programmer name- NIJAL BHANDERI 24CE009
AIM - recursive and iterative approch
date -3 march 25*/
#include<iostream>
#include<iomanip>
using namespace std;
//to allocate memory dynamically we have to use keywords NEW and DELETE

int recursive_way(int*arr,int n){
    if (n==0){
        return 0;
    }
    return arr[n-1]+recursive_way(arr,n-1);
}

int iterative_way(int*arr,int n){
    int sum=0,i;
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the size of array u want to created:";
    cin>>n;
    cout<<endl;

    int* arr= new int[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
     // Calculate and output the sum using the recursive approach
    int recursiveResult = recursive_way(arr, n);
    cout << "Recursive sum: " << recursiveResult << endl;

    // Calculate and output the sum using the iterative approach
    int iterativeResult = iterative_way(arr, n);
    cout << "Iterative sum: " << iterativeResult << endl;

    // Free the dynamically allocated memory
    delete[] arr;
    cout<<"\nNIJAL BHANDERI 24CE009"<<endl;
    return 0;

}
