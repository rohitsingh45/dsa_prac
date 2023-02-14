#include <iostream>
using namespace std;


int firstIndex(int arr[], int size, int index, int target){
    if(size == index) return -1;
    else{
        if(arr[index] == target) return index;
        else firstIndex(arr, size, index+1, target);
    }
}


int main(){

    int arr[8] = {22, 33, 88, 33, 44, 88, 11, 99};
    cout << firstIndex(arr,8,0,44);

    return 0;
}