#include <iostream>
using namespace std;

int main(){   
// character array pointer......
    // char ch[] = "Hello";
    // char *pch = ch;

    // cout << ch << endl;      // Print the whole characters.
    // cout << pch << endl;     // print the whole characters.
    // cout << ch[0] << endl;   // print the 0th index value.
    // cout << pch[0] << endl;  // print the 0the index of characters array. 

// character pointer........
    // char c = 'a';     
    // char *ptr = &c;
    // c++;  // increment the value of a to b.
    // cout << c << endl;  // print b
    // cout << ptr << endl;  // print the value of character c until found a null value.
    // cout << *ptr << endl;  // print only the value of char.


    char b[] = {'a','b','c','\0'};
    char *c = &b[0];
    c = c+1;
    cout << b << endl;  // Print the whole character till the null. 
    cout << c << endl;  // Print the whole character after a till the null.


    return 0;
}