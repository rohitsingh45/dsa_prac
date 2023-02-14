#include<iostream>
using namespace std;

void fun(int * arr);
// void square(int * p);

  void fun(int * arr){ 
        cout << *arr << endl;  // same as arr[0]
        cout << "Size of array pointer is:" << sizeof(arr) << endl;
        // Here it will print 8 because integer pointer is of 8 byte size
    }

    // void square(int *p){
    //     int a = 10;  // Declaring and intialing a local variable
    //     p = &a;
    //     *p = (*p) * (*p);   // It will be 100 but modify the local variable a not of main function.
    //     cout << a << endl;
    // }

int main(){
    int a[] = {23, 54, 32, 65, 12, 43};

    cout << sizeof(a) << endl;  // Print size of array
    fun(a+1); 
    // Here we have ignored the array value of index 0 and passed all rest values.
    cout << *a << endl; // same as cout a[0]

    // int a = 11;
    // square(&a);
    // cout << a << endl; 
    // Print the same value 11 because square method work with another local variable of same name.
    // that can't affect the variable a inside the main function.
    return 0;
}