#include <iostream>
using namespace std;
int count = 1;

void print1toN(int n){
    if(count > n)
        return;
    else{
        cout << count << endl;
        count++;
        print1toN(n);
        }
}

void print1toN2(int i, int n){
    if(i>n)
    return;
    else{
        cout << i << endl;
        print1toN2(i+1, n);
    }
}

void backtrack(int i, int n){
    if(n<i)
    return;
    else{
        backtrack(i,n-1);
        cout << n << endl;
    }
}

int main(){
    print1toN(8);
    cout << endl;
    print1toN2(0,9);
    cout << endl << "BackTrack" << endl;
    backtrack(1,8);
}