#include <iostream>
#include <queue>
using namespace std;



int main(){

    queue <string> names;

    names.push("Rahul");
    names.push("Rohit");
    names.push("Vishal");

    cout << "Size of queue is:- " << names.size() << endl;

    int temp = names.size();

    for(int i=0; i<temp; i++){
        cout << names.front() << " ";
        names.pop();
    }

    return 0;
}