#include<iostream>
using namespace std;
int counter = 1;

void countNumber(int n){
    if(n == 1)
       { cout << n << endl;
        return;}
    cout << n << endl;
    countNumber(n-1);
}

void recursiveValue(int val = 8){
    
    if(counter == val)
       { cout << counter << endl;
            return;
       }
    cout << counter << endl;
    counter++;
    recursiveValue(9);
    
}

int main(){

    // countNumber(8);
    recursiveValue();
    return 0;
}