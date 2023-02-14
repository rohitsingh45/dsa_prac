#include <iostream>
using namespace std;


int allIndex(int arr[], int size, int target, int output[]){
        if(size < 0) return 0;
        else{
            int ans = allIndex(arr, size-1, target, output);

            if(arr[size-1] == target){
                output[ans] = size-1;
                return ans+1;
            }
            else return ans;
        }

}

int allIndex2(int arr[], int size, int target, int output[]){
    if(size < 0) return 0;
    else{
        int temp = allIndex2(arr+1, size-1, target, output);

        for(int i=0; i < temp; i++){
            output[i]++;
        }

        if(arr[0] == target){
            for(int i=temp; i>=0; i--){
                output[i] = output[i-1];
            }
            return temp+1;
        }
        else return temp;
    }
}

int main(){

   int arr[8] = {34, 45, 65, 87, 98, 45, 34, 45};
   int indexArray[5] = {};

    int  arr2 = allIndex(arr,8,34,indexArray);

    for(int i=0; i<arr2; i++){
        cout << indexArray[i] << endl;
    }

    return 0;
}