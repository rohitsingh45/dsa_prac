#include <iostream>
using namespace std;

bool check(string input){
    if(input.empty()) return false;
    if(input[0] != 'a') return false;
    else{
        if(input[1] == 'b' && input[2] =='b'){
            if((input.substr(3)).length() > 0){
                return check(input.substr(3));
            }
            else return true;
        }
        else if(input[1] == 'a') return true;
        else{
            if((input.substr(1)).length() > 0) return check(input.substr(1));
            else return true;
            
            }
    }
}


int main(){

    cout << check("aaaabb");

    return 0;
}