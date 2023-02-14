#include<iostream>
using namespace std;

int calFact(int n){
    if(n == 0) return 1;
    else
    return n * calFact(n-1);
}

int fibbo(int n){
    if(n == 0) return 0;
    
    if(n == 1) return 1;
    else{
        return fibbo(n-1) + fibbo(n-2);
    } 
}

int main(){
    cout << "Enter factorial value" << endl;
    int n;
    cin >> n;
    cout << "Factorial is:- " << calFact(n) << endl;
    cout << n << "th Fibbonacci is:- " << fibbo(n) << endl;


}