#include <iostream>
#include <stack>
using namespace std;



int main(){

    // It follows first in last out or last in first out.

    stack<string> stc;

    // push() function used to insert element in stack.
        stc.push("Rohit");
        stc.push("Kumar");
        stc.push("Singh");

    cout <<" Size of stack is:- " << stc.size() << endl;


    // pop() function used to remove element which is at top of the stack.
        // stc.pop();

    // Traversing the stack's elements...
    int temp = stc.size();
    for(int i=0; i<temp; i++){
        cout << stc.top() << " ";
        stc.pop();
    }

    cout << endl <<  "Is stack empty :- " << stc.empty() << endl;


    return 0;
}