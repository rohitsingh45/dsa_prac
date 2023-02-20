#include <iostream>
using namespace std;

int noofzero(int n){
    if(n == 0) return 1;  // Just to handle when n == 0
    if(n < 10) return 0;  // Base case...
    else{
        int count = noofzero(n/10);
        if(n%10 == 0) return count+1;
        else return count;
    }
}


int main(){

    cout << noofzero(1010450420) << endl;

    return 0;
}