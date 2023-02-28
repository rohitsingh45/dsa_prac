#include <iostream>
using namespace std;


int partion(int arr[], int si, int ei){
    int pivot = arr[si];
    int count = 0;
    for(int i=si+1; i<=ei; i++){
        if(arr[i] <= pivot) count++;
    }
    int pi = si + count;
    int temp = arr[pi];
    arr[pi] = pivot;
    arr[si] = temp;
    int i=si, j=ei;
    while(i<pi && j>pi){
        while(arr[i] <= pivot) i++;

        while(arr[j] > pivot) j--;

        if(i<pi && j>pi){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    return pi;
}

void quicksort(int arr[], int si, int ei){
    if(si>=ei) return;
    else{
        int pivotIndex = partion(arr,si,ei);
        quicksort(arr, si, pivotIndex-1);
        quicksort(arr, pivotIndex+1, ei);
    }
}


int main(){

    // Write your code here......

    int arr[5] = {23, 13, 55, 89, 45};

    for(int i=0; i<5; i++) cout << arr[i] << " ";

    quicksort(arr, 0, 4);
    cout << endl;
    for(int i=0; i<5; i++) cout << arr[i] << " ";

    return 0;
}