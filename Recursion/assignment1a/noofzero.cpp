#include <iostream>
using namespace std;

int noofzero(int n, int count=0){
    if(n == 0) return 0;
    else if( n % 10 == 0){
        count++;
        noofzero(n/10,count);
    }
    else noofzero(n/10,count);
    return count;
}


int main(){

    cout << noofzero(1204020);

    return 0;
}