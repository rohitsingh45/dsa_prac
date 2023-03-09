#include <iostream>
using namespace std;

int subseq(string input, string output[]){
    if(input.empty()){
        output[0] = "";
        return 1;
    }

    int smallOP = subseq(input.substr(1), output);
    for(int i=0; i<smallOP; i++){
        output[i +smallOP] = output[i] + input[0]; 
    }
    return 2*smallOP;
}


int main(){

    // Write your code here......

    string input;
    cout << "Enter a string:- " << endl;
    cin >> input;

    string output[100];
    int lengthOfOP = subseq(input, output);
    for(int i=0; i<lengthOfOP; i++){
        cout << output[i] << " ";
    }

    return 0;
}