#include <iostream>
using namespace std;


// Parameterized Way.......
// void sumOfN(int n, int sum){
//     if(n < 1) 
//     {
//         cout << sum << endl;
//         return;
    
//     }
//     else 
//     sumOfN(n-1, sum+n);
// }

// functional Ways.....

int sumOfN2(int n){
    if(n==0) return 0;
    else{
        return n + sumOfN2(n-1);
    }
}

int main(){
    int n;
    cin >> n ;
    // sumOfN(n,0);
    cout << sumOfN2(n);
}