#include<bits/stdc++.h>
using namespace std;

int fibbo(int n, vector<int>& dp){
    if(n<=1) return dp[n] = n;
    if(dp[n] != -1) return dp[n];
    return dp[n] = fibbo(n-1,dp)+fibbo(n-2,dp);
}

int main(){   
    cout << "Enter value till find the fibbonacci" << endl;
    int n;
    cin >> n;

    vector<int> dp(n+1,-1);
    fibbo(n,dp);
    for(auto i:dp)cout << i << " ";
}