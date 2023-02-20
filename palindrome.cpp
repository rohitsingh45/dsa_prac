#include <iostream>
#include <string>
using namespace std;

bool helper(string ss, int start, int end){
    if(start>=end) return true;
    else{
        if(ss[start] == ss[end]){
            return helper(ss, start+1, end-1);
        }
        else return false;
    }
}


bool isPalindrome(string ss){ 
    return helper(ss, 0, ss.length()-1);
}


// bool checkPalindrome(string input)
// {
//     // Write your code here
//     static int i = 0;
//     int l = input.length();
//     if (i == l)
//         return true;
//     if (input[i] == input[l - i - 1])
//     {
//         i++;
//         checkPalindrome(input);
//     }
//     else
//         return false;
// }




int main(){

cout << isPalindrome("dalddlad");
    return 0;
}