#include <iostream>
using namespace std;

// parameterized way....
// void fact(int n, int factVal=1){
//     if(n < 1){
//         cout << factVal ;
//         return;
//     }
//     else{
//         fact(n-1,n*factVal);
//     }
// }

// functional ways....
int fact2(int n){
    if(n == 1) return 1;
    else{
        return n * fact2(n-1);
    }
}




int main(){

    cout << fact2(8);

    return 0;
}