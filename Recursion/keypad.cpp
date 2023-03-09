#include <iostream>
using namespace std;

void keypadSubsequence(int number, string keypad[], string output[]){
    if(number == 0){
        output.add("");
        return;
    }

    int rem = number % 10;
    int newNumber = number / 10;
    keypadSubsequence(newNumber, keypad, output);
    for(int i=0; i<output.length(); i++){
        output[i] = output[i] + keypad[rem];
        cout << output[i] << " ";
    }return;

}


int main(){

    string zero, one = "";
    string two = "abc";
    string three = "def";
    string four = "ghi";
    string five = "jkl";
    string six = "mno";
    string seven = "pqrs";
    string eight = "tuv";
    string nine = "wxyz";

    string keypad[10] = {zero, one, two, three, four, five, six, seven, eight, nine};

    string str[100];

    cout << "Enter a number from keypad:- " << endl;
    int number;
    cin >> number;

    keypadSubsequence(number,keypad,str);


    return 0;
}