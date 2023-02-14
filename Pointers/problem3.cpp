#include<iostream>
using namespace std;

int main(){
    double var = 43.33;
    double *d = &var;

    cout << *d << endl; // Print value of var
    cout << d << endl;  // Print address of var
    cout << d+1 << endl;  // Print +8 bytes into the address of var.
    *d = 45.5;
    cout <<var<<endl;

    d = d+1;    // Update the value of d by +8 bytes into the address of var.

    cout << *d <<endl; // Print garbage value

    return 0;
}