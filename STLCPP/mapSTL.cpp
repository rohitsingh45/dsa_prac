#include <iostream>
#include <map>
using namespace std;

// Internally uses red black tree or any balanced tree
// Store values in form of key-value pair.
// Each key has exactaly one values and values may be duplicate for more than 1 keys.
// Each key must be unique.

int main(){

    map<int,string> m;

    // Inserting element in map...
    // m[key] = value.
    m[1] = "Rohit";
    m[45] = "Kumar";
    m[23] = "Singh";
    m[46] = "Kashyap";
    m[2] = "Ravi";
    m[1] = "Rahul"; // Modify the value
    m[0] = "Shri";

    //Another way to insert elements...
    m.insert({-1,"Mr."}); // One value at a time.
    // It will give warnning message each time.
    
    // Iterating map...
    map<int,string>::iterator itr;
    for(itr = m.begin(); itr != m.end(); itr++){
        cout << (*itr).first << " " << (*itr).second <<endl;
    } // Here (*itr).first refers to the key values of map
    // (*itr).second refers to the values associated with the pointer of map.
    // Notice that values are print in sorted order w.r.t key values.

    //m.erase(key) will erase the map element of that key.
    // m.find(key) will return pointer where target key has found otherwise return address of first key.
     
    return 0;
}