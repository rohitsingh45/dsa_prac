#include <iostream>
using namespace std;

bool findElement(int arr[], int size, int target){
    if(size > 0){
    if(target == arr[0])
    return true;
    else{
        findElement(arr+1, size-1, target);
    }
    }
    else
        return false;
}

int main(){
    int array1[] = {34, 65, 66, 12, 83};

    if(findElement(array1,5,73)){
        cout << "Element Found";
    }
    else{
        cout << "Element Not Exist";
    }

    return 0;
}