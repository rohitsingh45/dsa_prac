#include <iostream>
using namespace std;

int sumOfArray(int arr[], int size, int sum = 0){
    if(size < 0) return sum;
    else{
        sum = sum + arr[0];
        return  sumOfArray(arr+1,size-1,sum);
    }
}

int main(){
    int arr[5] = {2,4,7,2,5};

   cout << sumOfArray(arr,5);
    return 0;
}