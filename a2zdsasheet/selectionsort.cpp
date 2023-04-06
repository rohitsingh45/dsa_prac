#include<iostream>
using namespace std;

void selectionSort(int arr[], int N){
    for(int i=0; i<N; i++){
        int min = i;
        for(int j=i+1; j<N; j++){
            if(arr[j]<arr[min]){
               min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    for(int i=0; i<N; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[5] = {23, 53, 11, 43, 12};
    selectionSort(arr,5);

    return 0;
}