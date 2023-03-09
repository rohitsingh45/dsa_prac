#include <iostream>
using namespace std;

void replace(char str[], char old, char new1){
    if(str[0] == '\0') return;
    if(str[0] != old){
        replace(str+1, old, new1);
    }
    else{
        str[0] = new1;
        replace(str+1, old, new1);
    }
}

int main(){

    cout << "Enter your string" << endl;
    char str[100];
    cin >> str;

    cout << "Enter old character" << endl;
    char old;
    cin >> old;

    cout << "Enter new character" << endl;
    char new1;
    cin >> new1;

    replace(str, old, new1);

    cout << str << endl;


    return 0;
}