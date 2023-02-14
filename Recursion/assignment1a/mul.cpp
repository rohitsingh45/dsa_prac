#include <iostream>
using namespace std;


int mul(int m, int n){
    if(n == 0) return 0;
    else return m + mul(m,n-1);
}


int main(){

cout << "Enter two numbers" << endl;

int a,b;
cin >> a;
cin >> b;

cout << "Multiplication result will be:- " << mul(a,b);
    return 0;
}