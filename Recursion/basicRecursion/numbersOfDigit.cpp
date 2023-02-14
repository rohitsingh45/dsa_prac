#include <iostream>
using namespace std;

int numberofDigit(int n, int count = 0){
    if(n == 0) return count;
    else{
        n = n / 10;
        return numberofDigit(n, count + 1);
    }
}

int main(){

    cout << numberofDigit(23544) << " ";

    return 0;
}