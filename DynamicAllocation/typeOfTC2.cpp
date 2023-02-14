#include<iostream>
using namespace std;

int main(){
    char c= 'A';
    char *pc = &c;

    cout << pc << endl;   // print abc (whole character) because of char address.

    int *p = (int *)pc;     // Explicit typecasting into integer.

    cout << *p << endl;     // Print 4 bytes garbage value after location of character pointer.
    cout << *pc << endl;  // print A. 

    return 0;
}