#include<iostream>
using namespace std;

int main(){
    int i= 65;
    char c = i;  
// This statement will typecast the value of i into character value A by using implicit typecasting.
    cout << i << endl << c << endl;   // print 65 & A.

    int *p = &i;
    // char *ch = p;
    // Here is also trying to do typecasting but implicit typecasting will throw error for it.
    // So we have to use explicit typecasting.
    char *pc = (char *)p;

    cout << p << endl;   // Print the address of i.
    cout << pc << endl;  // Print ASCII value at the address of i.
// As we know cout will print the value of character rather than printing address passed to them.
// So here when we have passed the address of integer into character pointer then it scan only one
// byte of data and Most of the system uses Little Endian system so value will stored at Left most bits.

// Since due to little endian system integer value is stored at Left most bit so below all statement
// will print whitespaces or null values. 
    cout << *(pc+1) << endl;
    cout << *(pc+2) << endl;
    cout << *(pc+3) << endl;
    

    return 0;
}