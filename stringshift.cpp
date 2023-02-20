#include <iostream>
using namespace std;



int main(){

    // Write your code here......

    char str[50] = {'A','B','C','D','\0'};
    char t1 = 'E', t2 = 'F';
    int i=0;

    while(str[i] != '\0'){
        cout << str[i] << " ";
        i++;
    }
    i = 4;
    while(i>0){
        str[i+1] = str[i];
        i--;
    }
     while(str[i] != '\0'){
        cout << str[i] << endl;
        i++;
    }

    return 0;
}