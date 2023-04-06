#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(5);
    v.push_back(8);
    v.push_back(15);
    v.push_back(18);
    v.push_back(51);
    v.push_back(81);

    // Using binary search function of algorithm....


    // cout << binary_search(v.begin(), v.end(), 51) << endl;
    // It will return 1 or 0, if element found then 1 & 0 if element not found.

    // Inserting new element to the vector....
    // for(int i=0; i<8; i++){
    //     int temp = 0;
    //     cin >> temp;
    //     v.push_back(temp);
    // }


    // // Using upper bound and lower bound function.... // Sort the given vector first...


    // // upper_bound() returns a pointer to those value which is greater than to last passed values and are in sorted range in vector.
    // // We can't easily predict the output of upper & lower bound when applied on un-sorted vector.
    // // Example:- 
    // cout << "Upper Bound Starts...." << endl;
    // vector<int>:: iterator it = upper_bound(v.begin(), v.end(), 15); // Return pointer pointing to the 18 because our vector is sorted.
    // // it = it - v.begin();
    // // cout << it-v.begin() << endl;
    // for(it-v.begin(); it!=v.end(); it++){
    //     cout << *it << endl;
    // }
    // cout << "Lower Bound Starts...." << endl;
    // // lower_bound() similar to upper bound but just return pointers to those values which are greater than or equal to specified value in sorted range.
    // it = lower_bound(v.begin(), v.end(), 15); // Return pointer pointing to the 15 because our vector is sorted.
    // // cout << it-v.begin() << endl; // it print starting index of sorted range.
    // for(it-v.begin(); it!=v.end(); it++){
    //     cout << *it << endl;
    // }


    // Maximum, Minimum, Swapping, Reversing can easily possible with help of it...
    // int a = 10;
    // int b = 20;
    // cout << "Maxi :- " << max(a,b) << endl;
    // cout << "Mini :- " << min(a,b) << endl;
    // cout << "a and b before swapping..." << endl;
    // cout << "a :- " << a << " b :- " << b << endl;
    // swap(a,b);
    // cout << "a and b after swapping..." << endl;
    // cout << "a :- " << a << " b :- " << b << endl;

    // revesing a string values....
    // string str = "Rohit Kumar Singh";
    // cout << "String Before Reverse...." << str << endl;
    // reverse(str.begin(), str.end());
    // cout << "String After Reverse...." << str << endl;
    
    // Reversing a vector elements....
    // cout << "Vector Before Reversing....." << endl;
    // vector<int>::iterator it = v.begin();
    // for(it; it != v.end(); it++){
    //     cout << *it << " ";
    // }cout << endl;
    // reverse(v.begin(), v.end());
    // cout << "Vector After Reversing....." << endl;
    // it = v.begin();
    // for(it; it != v.end(); it++){
    //     cout << *it << " ";
    // }cout << endl;

    // Rotation of vecotr's elements with other elements....
    // Perform operation and send the element at last of vector...
    // cout << "Vector Before Rotating....." << endl;
    // it = v.begin();
    // for(it; it != v.end(); it++){
    //     cout << *it << " ";
    // }cout << endl;
    // rotate(v.begin(),v.begin()+2, v.end());
    // // Here rotate() function take starting of firstElementIndex, lastElement(last element of vector till you want to rotate), endIndex.
    // cout << "Vector After Rotating....." << endl;
    // it = v.begin();
    // for(it; it != v.end(); it++){
    //     cout << *it << " ";
    // }cout << endl;


    return 0;
}