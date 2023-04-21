#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;


vector<int> findIntersection(int arr1[], int arr2[], int m, int n){
    set<int> set1;

    for(int i=0; i<m; i++){
        set1.insert(arr1[i]);
    }

    set<int> set2;

    for(int j=0; j<n; j++){
        set2.insert(arr2[j]);
    }

    vector<int>intersection;

    set<int>::iterator it;
    set<int>::iterator it2;

    for(it = set1.begin(); it!=set1.end(); it++){
        for(it2 = set2.begin(); it2!=set2.end(); it2++){
            if((*it) == (*it2)){
                intersection.push_back(*it);
            }
        }
    }

    return intersection;

}

set<int> findUnion(int arr1[], int arr2[], int m, int n){
    set<int>unionElement;

    for(int i=0; i<m; i++){
        unionElement.insert(arr1[i]);
    }
    for(int j=0; j<n; j++){
        unionElement.insert(arr2[j]);
    }

    return unionElement;
}


int main(){

    int arr1[5] = {1, 2, 3, 4, 5};

    int arr2[4] = {2, 3, 8, 5};

    vector<int> intersectedValue;
    intersectedValue = findIntersection(arr1,arr2,5,4);
    cout << "Intersection of above elements are:- " << endl;
    for(int i=0; i<intersectedValue.size(); i++){
        cout << intersectedValue[i] << " ";
    }cout << endl;


    set<int>unitedElement;

    unitedElement = findUnion(arr1, arr2, 5, 4);

    set<int>::iterator itr;
    cout << "Union of Elements are:- " << endl;
    for(itr = unitedElement.begin(); itr!=unitedElement.end(); itr++){
        cout << *itr << " ";
    }

    return 0;
}