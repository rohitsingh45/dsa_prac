#include <iostream>
#include <list>
#include <iterator>
using namespace std;



int main(){

    list<int> ll;
    ll.push_back(4);
    ll.push_front(5);

    // Iterating a list through iterator....
    // We can't do it by using at() or index value because it can't support by list STL.
    list<int>::iterator it;
    for(it = ll.begin(); it != ll.end(); ++it){
        cout << *it << " ";
    }cout << endl;

    ll.erase(ll.begin());
    // It will remove first element of list.
    cout << "After erasing one element:- " << endl;
    for(it = ll.begin(); it != ll.end(); ++it){
        cout << *it << " ";
    }

    return 0;
}