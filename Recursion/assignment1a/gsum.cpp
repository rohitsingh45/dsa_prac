#include <iostream>
using namespace std;

double power(int y){
    int temp = 1;
    if(y==0) return 1;
    else{
     while(y>0){
        temp = temp * 2;
        y--;
     }
     return temp;
     }
}

double gsum(int n){
    if(n == 0) return 1;
    else{
    double partSum = gsum(n-1);
    return partSum + 1.0/power(n); 
    }
}


int main(){
    
    cout << gsum(3);
    return 0;
}