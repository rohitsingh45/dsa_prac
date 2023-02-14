#include <iostream>
using namespace std;

void updateValue(int *p){
    *p = 610 % 255;
    // Here we are modifying the value stored at local pointer location so it will 
    // also reflect in main value.
}

int main(){
    char ch = 'A';
    updateValue((int*)&ch); // Explicit typecasting of character address into integer address.
    cout << ch; // Print 'd' which ascii value is 100.
}