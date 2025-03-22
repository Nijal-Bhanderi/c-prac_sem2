/* c++ practical 3.4
Programmer name- NIJAL BHANDERI 24CE009
AIM -template usage
date -3 march 25*/
#include <iostream>
using namespace std;

// Template function to find the maximum value in an array
template <typename T>
T find_max(T arr[], int n) {
    T maxi = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxi) {  // Correct condition to find max
            maxi = arr[i];
        }
    }
    return maxi;  // Return the maximum value
}

// Template function to reverse an array
template <typename T>
void rev(T arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        T temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

// Template function to display an array
template <typename T>
void display(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Example 1: Integer collection
    int arr[] = {1, 3, 5, 7, 2, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Integer Collection: ";
    display(arr, size);

    cout << "Maximum Value: " << find_max(arr, size) << endl;

    rev(arr, size);
    cout << "Reversed Collection: ";
    display(arr, size);

    // Example 2: Float collection
    float floatArr[] = {2.5f, 3.1f, 1.9f, 7.2f, 5.3f};
    int floatSize = sizeof(floatArr) / sizeof(floatArr[0]);

    cout << "\nFloat Collection: ";
    display(floatArr, floatSize);

    cout << "Maximum Value: " << find_max(floatArr, floatSize) << endl;

    rev(floatArr, floatSize);
    cout << "Reversed Collection: ";
    display(floatArr, floatSize);

    // Example 3: Character collection
    char charArr[] = {'a', 'z', 'r', 'b', 'k'};
    int charSize = sizeof(charArr) / sizeof(charArr[0]);

    cout << "\nCharacter Collection: ";
    display(charArr, charSize);

    cout << "Maximum Value: " << find_max(charArr, charSize) << endl;

    rev(charArr, charSize);
    cout << "Reversed Collection: ";
    display(charArr, charSize);

    cout<<endl<<"NIJAL BHANDERI 24CE009"<<endl;
    return 0;
}

