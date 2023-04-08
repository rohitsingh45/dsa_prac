#include <iostream>
using namespace std;

void bubble(int arr[], int n){
    if(n == 1) return;

    else{
        for(int j=0; j<n-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        bubble(arr,n-1);
    }
}



 int main(){
    int arr[] = {4,3,2,5,6};
    
    insertion(arr,5);

    for(int i=0; i<5; i++){
    cout << arr[i] << " ";
    }

 }