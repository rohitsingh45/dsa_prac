#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int power(int x, int y){
    if(y == 0) return 1;
    else return x * power(x, y-1);
}


int stringtoint(string ss){

    if(ss.length()>0){
        int a = (ss[0]-48) * power(10, ss.length()-1);
        return a + stringtoint(ss.substr(1));

    }
    else return 0;
}


int main(){

    cout << "Enter you string" << endl;

    string ss;

    cin >> ss;

    cout << "String after successfully conversion will be:- " << endl;

    int b =  stringtoint(ss);
    cout << b << endl;
    cout << typeid(ss).name() << endl;
    return 0;
}