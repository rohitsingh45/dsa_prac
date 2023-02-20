#include <iostream>
#include <string>
using namespace std;

void removeX(string ss){
    if(ss.length() == 0) return;
    else{
        if(ss[0] == 'x'){
            removeX(ss.substr(1));
        }
        else{
            cout << ss[0];
            removeX(ss.substr(1));
        }
    }
}

int main(){

    // Write your code here......

cout << "Enter you string" << endl;

string ss;

cin >> ss;

cout << "String after successfully removing element will be:- " << endl;

removeX(ss);

    return 0;
}