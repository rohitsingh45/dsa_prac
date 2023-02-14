#include <iostream>
using namespace std;

// My logic.....
int counter = 0;
void printName(){
    if(counter == 5){
        return;
    }
    else
    cout << "Rohit Kumar" << endl;
    counter++;
    printName();

}

// Index adding logic or forward logic.....
void printName2(int i, int n){
    if(i>n){
        return;
    }
    else{
        cout << i << endl;
        printName2(i+1,n);
    }
}

// Backtrac logic or backward logic....
void backtrack(int i, int n){
    if(n<i)
    return;
    else{
        backtrack(i,n-1);
        cout << "Rohit Kumar" << endl;
    }
}

int main(){

    printName();
cout << "\nNext Line:- \n" << endl;
    printName2(1,8);

    cout << endl << "Backtrack Method:- " << endl;
    backtrack(1,5);
    return 0;
}