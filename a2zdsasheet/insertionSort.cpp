#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i; j>=0; j--){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }


}


int main(){

    int arr[8] = {4,3,2,5,6,1,3,7};

    insertionSort(arr,8);

    return 0;
}