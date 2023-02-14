#include<iostream>
using namespace std;

int findIndexElement(int arr[],int target, int index, int size){
    if(index == size){
        return -1;
    }
    else{
        if(target == arr[index])
    return index;
    else{
        findIndexElement(arr,target,index+1,size);
    }
    }
}

int main(){
    int arr[]= {34, 53, 23, 52, 55};
    
   cout << findIndexElement(arr,23,0,5);
    return 0;
}