#include <iostream>
#include <vector>
using namespace std;



int main(){

    // It will create a vector of size 5 with value 1.
    vector<int> a(5,1);
        cout << "Vector 1st declaration and intialization method:- " << endl;
    for(int i=0; i<a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;

    // It will create a vector which has copied element of another vector....
    vector<int> copied(a);
    cout << "Vector 2nd declaration and intialization method:- " << endl;
    for(int i=0; i<copied.size(); i++){
        cout << copied[i] << " ";
    }
    cout << endl;

   vector<int> vr;
   
   cout << "Enter vector elements:- " << endl;

   int input;
   for(int i=0; i<2; i++){
   cin >> input;
   vr.push_back(input);
   }

//  This way of iterating array is only supported on cpp 11+ version, here it will generate run time error.
//    for(int i:vr){
//     cout << i << " ";
//    }cout << endl;

    // As similar to array vr.size() return number of element in vector...

    for(int i=0; i<vr.size(); i++){
        cout << vr[i] << " ";
    }
    cout << endl;

    // vr.capacity() return total element can hold by a vector...
    cout << "Capacity of vector is:- " << vr.capacity() << endl;
    vr.push_back(5);
    cout << "New capacity is:- " << vr.capacity() << endl;
    // Here intially the capacity of vector was 2 but when we enter new element in vector then size grows by 2...
    // Here only capacity has changed not the vector size...

    // As similar to array vr.at(2) return value at index 2 in vector....
    cout << "Element at index 2 is:- " << vr.at(2) << endl;

    // vr.front() return first while vr.back() return last element of vector....
    cout << "First element is:- " << vr.front() << endl;
    cout << "Last element is:- " << vr.back() << endl;

    // vr.pop_back() delete element from the last index...
    vr.pop_back(); 
    for(int i=0; i<vr.size(); i++){
        cout << vr[i] << " ";
    }
    cout << endl;
    
    // vr.clear() delete the all element of vector but keep reserved memory spaces for vector as of the same size..
    cout << "Capacity of vecot is:- " << vr.capacity() << endl << "Size of arry is " << vr.size() << endl;
    vr.clear();
    cout << "Capacity of vecot is:- " << vr.capacity() << endl << "Size of arry is " << vr.size() << endl;

    return 0;
}