#include <iostream>
using namespace std;

// Method 1 :- Using Global Variables....

int sum1, rem1 = 0;

int reverse2(int n){
    if(n == 0) {
        return sum1;}
    else{
        rem1 = n % 10;
        sum1 = sum1 * 10 + rem1;
        return reverse2(n/10);
    }
}

// Method 2:- Using local variables......

int reverse(int n, int sum = 0, int rem = 0){
    if(n == 0) {
        return sum;
        }
    else{
        rem = n % 10;
        sum = sum * 10 + rem;
        reverse(n/10, sum, rem);
    }
}




int main(){

// cout << reverse(4002);
cout << reverse2(5624);
    return 0;
}