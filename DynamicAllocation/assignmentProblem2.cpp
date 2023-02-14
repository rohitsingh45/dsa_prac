#include <iostream>
using namespace std;

#define SQUARE(x) x*x

int main(){
    int y = 36/(SQUARE(6));
    // Here we have to use () for increase the predecence of square value.
    cout << y;

    return 0;
}