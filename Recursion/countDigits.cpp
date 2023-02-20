#include<iostream>
using namespace std;
int count = 0;
void countDigit(int val){
    if(val%10>0 || val>0){
        count = count +1;
        countDigit(val/10);
    }
    else{
        cout << count << endl;
    }
}

int main(){
    cout << "Enter the value which digits want to count " << endl;
    int n=0;
    cin >> n;
    countDigit(n);
    return 0;
}