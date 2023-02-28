#include <iostream>
using namespace std;


void print_subseq(string input, string output){
    if(input.empty()){
        cout << output << " ";
        return;
    }

    print_subseq(input.substr(1), output);
    print_subseq(input.substr(1), output + input[0]);
}

int main(){

    string input;
    string output = "";
    cout << "Enter string :- " << endl;
    cin >> input;
    print_subseq(input, output);

    return 0;
}