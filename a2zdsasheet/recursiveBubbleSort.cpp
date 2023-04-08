#include <iostream>
using namespace std;

void bubble(int arr[], int n, int iteration){
    if(n<0) return;
    else{
        bubble(arr,n-1,iteration);
        if(arr[n]>arr[iteration]){
            int temp = arr[n];
            arr[n] = arr[iteration];
            arr[iteration] = temp;
        }
    }
}


 int main(){
    int arr[] = {4,3,2,5,6,1,3,7};
    for(int i=0; i<8; i++){
    bubble(arr,7,i);
    }

    for(int i=0; i<8; i++){
    cout << arr[i] << " ";
    }

 }