#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        
        vector<int> temp(n);
        for(int i=0; i<n; i++){
            temp[i] = arr[i];
        }
        sort(temp.begin(),temp.end());
        int count = 1;
        
        for(int i=0; i<n; i++){
            if(temp[i] == count){
                count++;
            }
        }
        
        return count;
    }

    long long maxSubarraySum(int arr[], int n){

        // If we have to consider the negative values and finding the maxSubarraySum in them then intialized maxSum to INT_MIN.
        // In case if we don't want maxSubarraySum has any -ve value then intialized the value of maxSum as 0.
        long long sum=0,maxSum = INT_MIN;

        for(int i=0; i<n; i++){
            sum += arr[i];
            maxSum = max(sum,maxSum);
            if(sum<0){
                sum =0;
            }
        }
        return maxSum;
    } 
};

int main(){
    cout << "Enter the size of array" << endl;
    int n;
    cin >> n;

    int arr[n];

    cout << "Enter the elments of array" << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    Solution ss;
    cout << ss.maxSubarraySum(arr,n) << endl;
    
}