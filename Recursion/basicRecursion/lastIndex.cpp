#include <iostream>
using namespace std;

int lastIndex(int arr[], int target, int lastElementIndex){
    if(lastElementIndex < 0) return -1;
    else{
        if(target == arr[lastElementIndex]) return lastElementIndex;
        else lastIndex(arr, target, lastElementIndex-1);
    }
}

int lastIndex2(int arr[], int size, int target){
    if(size == 0) return -1;
    else{
        int ans = lastIndex2(arr+1, size-1, target);
        if(arr[ans] == target) return ans+1;
        else{

        }
    }
}


int main(){

    int arr[8] = {22, 33, 88, 33, 44, 88, 11, 99};

    cout << lastIndex(arr,88,7) << endl;

    cout << lastIndex2(arr,8,44);

    return 0;
}