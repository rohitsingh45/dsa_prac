#include <iostream>
using namespace std;

int longestSubarraySum(int arr[], int n, int target){
    
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
           int sum = 0;

           for(int k=i; k<=j; k++){
            sum += arr[k];
           }
           if(sum == target){
            count = (count > (j-i+1))?count:(j-i+1);
           }
        }
    }
    return count;
}


int main(){

    int arr[5] = {2,3,5,4,1};

    cout << longestSubarraySum(arr,5,6);
    return 0;
}