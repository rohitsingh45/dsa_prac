#include <iostream>
using namespace std;

int sumOfDigit(int n, int sum){
    if(n / 10 == 0 && n == 0) return sum;
    else{
        int temp = n % 10;
        sum = sum + temp;
        n = n / 10;
        return sumOfDigit(n, sum);
    }
}

int main(){

cout << sumOfDigit(9,0);
    return 0;
}