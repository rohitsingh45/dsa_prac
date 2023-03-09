#include <iostream>
using namespace std;



int main(){

    // Write your code here......

    char str[50] = "abcd";
    cout << str << endl;
    int i = 1;
    while(str[i] != '\0'){
        str[i-1] = str[i];
        i++;
    }
    str[i-1] = str[i];
    cout << str << endl;
   

    return 0;
}