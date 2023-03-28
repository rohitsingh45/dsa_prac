#include <iostream>
#include <queue>
using namespace std;



int main(){

    // Max-heap:- return values in decreasing order no matter in which order you inserted them..
    priority_queue<int> maxi;

    // Min-heap :- return values in increasing order no matter in which order you inserted them...
    priority_queue<int, vector<int>, greater<int> > mini;

    // Insertion.....
    maxi.push(45);
    maxi.push(22);
    maxi.push(56);
    maxi.push(20);
    maxi.push(11);

    // Traversing...
    cout << "Max-heap Priority queue is:- " << endl;
    int temp = maxi.size();
    for(int i=0; i<temp; i++){
        cout << maxi.top() << " ";
        maxi.pop();
    }cout << endl;

    // Insertion in min heap.....
    mini.push(45);
    mini.push(22);
    mini.push(56);
    mini.push(20);
    mini.push(11);

    // Traversing...
    cout << "Min-heap Priority queue is:- " << endl;
     temp = mini.size();
    for(int i=0; i<temp; i++){
        cout << mini.top() << " ";
        mini.pop();
    }cout << endl;

    return 0;
}