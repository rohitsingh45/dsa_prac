#include<iostream>
using namespace std;

void dblPointer(int ** p);

int main(){

    int num = 10;
    int * ptr = &num;

     dblPointer(&ptr);
    cout << num << endl;
    return 0;
}

void dblPointer(int** p){
    (**p)++;
}