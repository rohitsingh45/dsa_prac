#include <iostream>
#include <string>
using namespace std;

// Using string library........
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


// Using character array......
void removeX2(char str[]){
    if(str[0] == '\0') return;

    if(str[0] != 'x'){
        removeX2(str+1);
    }
    else{
        int i = 1;
        for(; str[i] != '\0'; i++){
            str[i-1] = str[i];
        } str[i-1] = str[i];
        removeX2(str);
    }
}

int main(){

    // Write your code here......

        // cout << "Enter you string" << endl;

        // string ss;

        // cin >> ss;

        // cout << "String after successfully removing element will be:- " << endl;

        // removeX(ss);


        char str[100];
        cout << "Enter your string" << endl;
        cin >> str;
        removeX2(str);
        cout << str;

    return 0;
}