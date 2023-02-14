#include<iostream>
using namespace std;
int temp = 0;
int addArray(int ar[], int size){
    if(size == 0)
    return temp;
    else{
        temp = temp + ar[0];
        addArray(ar+1,size-1);
    }
}

int main(){
    int arr[]= {34, 53, 23, 52, 55};
    cout << addArray(arr,5) << endl;
    return 0;
}