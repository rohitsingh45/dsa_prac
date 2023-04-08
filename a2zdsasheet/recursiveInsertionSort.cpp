#include<bits/stdc++.h>
using namespace std;

void insertion(int arr[], int n){
    if(n == 0) return;

    else{
        insertion(arr,n-1);
        for(int j=n-2; j>=0; j--){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }
}


int main(){
    int arr[] = {4,3,2,5,6};
    
    insertion(arr,5);

    for(int i=0; i<5; i++){
    cout << arr[i] << " ";
    }

 }