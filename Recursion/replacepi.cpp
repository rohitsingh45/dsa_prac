#include <iostream>
#include <string>
using namespace std;

void replacePi(string ss){
    if(ss.length() == 0 || ss.length() == 1){
        cout << ss;
        return;
    }
    else{
        if(ss[0] == 'p' && ss[1] == 'i'){
            cout << "3.14";
            replacePi(ss.substr(2));
        }
        else{
            cout << ss[0];
            replacePi(ss.substr(1));
        }
    }
}


int main(){

cout << "Enter you string" << endl;

string ss;

cin >> ss;

cout << "String after successfully replacement will be:- " << endl;

replacePi(ss);
    return 0;
}