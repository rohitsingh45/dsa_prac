#include <iostream>
#include <set>
using namespace std;

//Only unique element
//Modification of element value not possible.
// Implemented by using BST internally.
// Elements are popped in sorted order.
// Set is generally slower than unordered set and unordered set not return values in sorted order.

int main(){

    set<int> s;
    s.insert(9);
    s.insert(5);
    s.insert(2);
    s.insert(3);

    // Traversing the set.....
    cout << "Intial Set Elements:- " << endl;
    set<int>::iterator it;
    for(it=s.begin(); it!=s.end(); it++){
        cout << *it << " ";
    }cout << endl;

    // Deleting element of set...
    s.erase(s.begin());
    // It will delete the first element of set.
    cout << "After Erasing Some Element Set Elements Are:- " << endl;
    
    for(it=s.begin(); it!=s.end(); it++){
        cout << *it << " ";
    }cout << endl;
    // count() function mainly count or check wheter element is avilabe or not just like find function..
    cout << "Check Whether 2 is avilable in set or not "<< s.count(2) << endl;  // Return 0
    cout <<"Check Whether 9 is avilable in set or not "<< s.count(9) << endl;  // Return 1

    // find() function check whether element is avilabe or not, if it is then return pointer of that location.
    set<int>::iterator itr = s.find(7);
    if(*itr) cout << *itr << endl;
    // If target element isn't avilable in set then by default it points to the first element of the set.

    cout << s.size() << endl; // return size of set(not include duplicate values)



    return 0;
}