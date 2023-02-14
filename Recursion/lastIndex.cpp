#include<iostream>
using namespace std;
int tempIndex = 0;

// void findLastIndexElement(int arr[],int target, int count, int size){
//     if(count == size){
//         return;
//     }
//     else{
//     if(target == arr[count])
//     {   
//         if(tempIndex < count){
//             tempIndex = count;
//         }
//         findLastIndexElement(arr,target,count+1,size);
        
//     }
//     else{
//         findLastIndexElement(arr,target,count+1,size);
//     }
//     return;
//     }
// }

int findLastIndexElement2(int arr[], int size, int target){
    if(size == 0) return -1;
    int index = findLastIndexElement2(arr+1, size-1, target);
    if(index >= 0){
        index = index + 1;
        return index;
    }
    if(arr[0] == target){
        return 0;
    }
    return index;
}


int main(){
    int arr[]= {34, 53, 23, 52, 55, 23,52};
    
//    findLastIndexElement(arr,52,0,7);
//    cout << tempIndex;

    cout << findLastIndexElement2(arr,7,53) << endl;
    return 0;
}