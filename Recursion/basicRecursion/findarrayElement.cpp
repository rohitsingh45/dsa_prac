#include <iostream>
using namespace std;

bool search(int arr[], int size, int element, bool status = false){
    if(size < 0) return status;
    else{
        if(element == arr[0]){
            status = true;
        }
        return search(arr+1,size-1, element, status);
    }
}

int main(){
    int arr[5] = {34, 45, 65, 87, 98};

    if(search(arr, 5, 88)) cout << "Element Found" << endl;
    else cout << "Element Not Found" << endl;

    return 0;
}