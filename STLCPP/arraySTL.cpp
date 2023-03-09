#include <iostream>
#include <array>

using namespace std;

// Due to some version issue this program will generate error in this editor.

int main()
{
    // Basic Array.....
    int basic[3] = {1,2,3};
    
    // STL array.....
    array<int,4> arr = {1,3,2,4};

    // Internally array stl is implement same as basic array.
    // We generally not use the array stl...
    
    // arr.size() return numbers of element in the array.
    for(int i=0; i<arr.size(); i++)
    cout << arr[i] << " ";
    
    cout << endl;
    // Indexing possible....
    arr[1] = 5;
    
    for(int i=0; i<arr.size(); i++)
    cout << arr[i] << " ";
    
    cout << endl;
    
    // arr.empty() will check either array empty or not....
    cout << "Is array Empty:- " << arr.empty() << endl;
    
    // arr.at(0) return element value at given index....
    cout << "Value at index 0 :- " << arr.at(0) << endl;
    
    // arr.front() return first element while arr.back() return last element of array....
    cout << "first element is:- " << arr.front() << endl;
    cout << "last Element is:- "<< arr.back() << endl;
    
    
    
    return 0;
}