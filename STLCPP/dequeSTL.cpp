#include <iostream>
#include <deque>
using namespace std;

// Deque stand for double ended queue.
// We can perform insertion and deletion from both the end of queue.
// Internally it is implemented by using two arrays


int main(){

    deque<int> dq;

    // dq.push_back() insert element from last end while dq.push_front() insert element from front side...
    dq.push_back(5);
    dq.push_back(25);
    dq.push_back(65);
    dq.push_front(10);
    dq.push_front(15);
    dq.push_front(12);

    // In deque size(), at(), front(), back()  work same as others STL containers...
    cout << "First element is:- " << dq.front() << endl;
    cout << "Last element is:- " << dq.back() << endl;
    cout << "Original deque is:- " << endl;
    for(int i=0; i<dq.size(); i++){
        cout << dq.at(i) << " ";
    }cout << endl;

    // dq.pop_front() delete element from front while dq.pop_back() delete element from rear or back of queue.
    dq.pop_front();
    cout << "Deque after removing from front " << endl;
    for(int i=0; i<dq.size(); i++){
        cout << dq.at(i) << " ";
    }cout << endl;

    dq.pop_back();
    cout << "Deque after removing from back " << endl;
    for(int i=0; i<dq.size(); i++){
        cout << dq.at(i) << " ";
    }cout << endl;


    // As similar to clear function of vector erase() function used to delete deque element.
    // dq.erase(startingIndex, endIndex) 
    dq.erase(dq.begin(), dq.begin()+2);

    cout << "Deque after erasing some element" << endl;
    for(int i=0; i<dq.size(); i++){
        cout << dq.at(i) << " ";
    }cout << endl;

    return 0;
}