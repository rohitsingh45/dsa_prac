#include <iostream>
using namespace std;

int main(){
    int arr[3] = {45, 23, 65};

    cout << arr << endl;  // Print the address of arr[0]
    cout << arr + 2 << endl;    // print the address of arr[2]
    cout << *arr << endl;   // print the value at arr[0]
    cout << *(arr+2) << endl;   // Print the value at arr[2]

    // Testing increment operators in array as pointer.....

    // int *p = arr++; 
    // This will throw error because we can't update the array with other addresses values.

    return 0;
}