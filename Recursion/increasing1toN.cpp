 // Problem 2 of coding ninja....

#include <iostream>
using namespace std;

void increase(int n, int i = 1){
    if(i>n) return;
    else{
        cout << i << " ";
        return increase(n,i+1);
    }
}

int main(){

    increase(8);

    return 0;
}