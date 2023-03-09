#include <iostream>
#include <string>
using namespace std;


void pairstar(string ss){
    if(ss.length() == 0) return;
    else{
        if(ss[0] == ss[1]){
            cout << ss[0];
            cout << "*";
            cout << ss[1];
            if(ss[1] == ss[2]) cout << "*";
            pairstar(ss.substr(2));
        }
        else{
            cout << ss[0];
            pairstar(ss.substr(1));
        }
    }
}


int main(){

    // Write your code here......
cout << "Enter you string" << endl;

string ss;

cin >> ss;

cout << "String after successfully replacement will be:- " << endl;

pairstar(ss);
    return 0;
}