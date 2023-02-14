#include <iostream>
using namespace std;

bool isSorted(int arr[], int size){
    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool temp = isSorted(arr+1, size-1);
        return temp;
    }
}

bool isSorted2(int arr[], int size){
    if(size == 0 || size == 1){
        return true;
    }
bool smallerOp = isSorted2(arr+1,size-1);
if(!smallerOp){
    return false;
}
if(arr[0]>arr[1]){
    return false;
}
else{
    return true;
}
}


int main(){

    int ar[] = {23, 45, 655, 77};
    cout << isSorted(ar, 4) << endl;
    cout << isSorted2(ar, 4) << endl;

    return 0;
}