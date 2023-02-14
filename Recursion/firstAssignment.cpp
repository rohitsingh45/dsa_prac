// Wirte a program to calculate the power of given values and powers.

#include<iostream>
using namespace std;
int powerMethod(int base, int power);

    int powerMethod(int base, int power){
        if(power == 0)
            return 1;
        else
            return base * powerMethod(base,power-1);
    }

int main(){
    cout << "Enter the base value" << endl;
    int base;
    cin >> base;
    cout << "Enter the power value" << endl;
    int power;
    cin >> power;
    cout << "The power of base value " << base <<"to the power " << power << " is: " << powerMethod(base,power) <<endl;
    return 0;
}