#include <iostream>
using namespace std;


int calPower(int x, int n){
    if(n == 1) return x;
    else{
        return x * calPower(x, n-1);
    }
}

int main(){

    cout << calPower(4, 4);

    return 0;
}