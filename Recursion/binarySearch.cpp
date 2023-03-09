#include <iostream>
using namespace std;

int binarySearch2(int low, int high, int arr[], int target){
    if(low>high) return -1;
    int mid = (low + high)/2;
    if(arr[mid] == target) return mid;

    if(arr[mid] > target) return binarySearch2(low, mid-1, arr, target);

    if(arr[mid] < target) return binarySearch2(mid+1,high, arr, target);
}

int binarySearch(int size, int *arr, int target){
    if(size == 0) return -1;
    else{
        int low = 0;
        int high = size-1;
        return binarySearch2(low, high, arr, target);
    }
}


int main(){

    int arr[5] = {3, 5, 8, 9, 11};

    cout << binarySearch(5, arr, 11);
    return 0;
}