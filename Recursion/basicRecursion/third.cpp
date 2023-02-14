#include <iostream>
using namespace std;

void printNto1(int n){
    if(n == 0){
        return;
    }
    else{
        cout << n << endl;
        printNto1(--n);
    }
}

void printNto12(int index, int max){
    if(max < index)
    return;
    else{
        cout << max << endl;
        printNto12(index, --max);
    }
}

void backtrack(int i, int n){
    if(i>n)
    return;
    else{
        backtrack(i+1,n);
        cout << i << endl;
    }
}

int main(){
    printNto1(8);
    cout << endl;
    printNto12(0,9);
    cout << endl << "Backtrack Method:- " << endl;
    backtrack(1,9);
    return 0;
}