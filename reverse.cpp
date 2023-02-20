#include <iostream>
using namespace std;


int reverse(int n){

}

int main(){

    int n;
    cin >> n;
    int temp = n % 10;
    int temp2 = n / 10;
    cout << "Reversed number is:- " << temp*10+temp2;

    return 0;
}