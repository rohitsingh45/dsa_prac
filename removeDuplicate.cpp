#include <iostream>
using namespace std;

void removeDupli(char str[]){
    if(str[0] == '\0') return;

    if(str[0] == str[1]){
        int i = 1;
        while(str[i] != '\0'){
            str[i-1] = str[i];
            i++;
        }str[i-1] = str[i];
        removeDupli(str);
    }
    else{
        removeDupli(str+1);
    }
}


int main(){

    char str[100];
    cout << "Enter your string" << endl;
    cin >> str;
    removeDupli(str);
    cout << str << endl;

    return 0;
}