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


int main(){

    int arr1[5] = {1, 2, 3, 4, 5};

    int arr2[4] = {2, 2, 2, 2};

    vector<int> intersectedValue;
    intersectedValue = findIntersection(arr1,arr2,5,4);

    for(int i=0; i<intersectedValue.size(); i++){
        cout << intersectedValue[i] << endl;
    }

    return 0;
}