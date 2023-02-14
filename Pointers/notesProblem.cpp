#include<iostream>
using namespace std;

int main(){
    int firstvalue=5, secondvalue=15;
    char thirdvalue='b';

    int* p1, *p2;
    char *p3;

    p1 = &firstvalue;
    p2 = &secondvalue;
    p3= &thirdvalue;

    *p1 = 10;
    // Now firstvalue = 10 also
    *p2 = *p1;
    // Now secondvalue = 10 also
    p1 = p2;
    // p1 will have address of p2
    *p1 = 20;
    // Now secondvalue = 20;
    *p3 = 'a';
    // Now thirdvalue = a

    cout << (*p1 == firstvalue) <<endl;
    cout << (*p1 == secondvalue) <<endl;
    cout << (p1 == p2) << endl;
    return 0;
}