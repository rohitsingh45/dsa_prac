#include <iostream>
using namespace std;


// int partition(int arr[], int si, int ei){
//     int pivot = arr[ei];
//     int i = si  ;

//     for(int j=si; j<=ei; j++){
//         if(arr[j] <= pivot){
//             arr[j] +=arr[i];
//             arr[i] = arr[j] - arr[i];
//             arr[j] = arr[j] - arr[i];
//             i++;
//         }
//     }
//     arr[ei] = arr[ei] + arr[i+1];
//     arr[i+1] = arr[ei] - arr[i+1];
//     arr[ei] = arr[ei] - arr[i+1];
//     // cout << arr[i+1];
//     return i+1;


// }

int partion(int arr[], int si, int ei){
    int pivot = arr[si];
    int temp = 0;
    int i = si;
    int j = ei+1;
    while(i<j){
        do{
            i++;
        }while(arr[i]<=pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i<j){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = pivot;
    pivot = arr[j];
    arr[j] = temp;
    cout << j << " ";
    return j;

}

void quicksort(int * arr, int si, int ei){
    if(si >= ei) return;
    else{

        int pivotIndex = partion(arr,si,ei);
        for(int i = 0; i<pivotIndex; i++) cout << <<  arr[i] << " ";
        quicksort(arr,si,pivotIndex-1);
        quicksort(arr,pivotIndex+1,ei);
    }
}

int main(){

    int ar[] = {23, 43, 12, 55, 22};

    // cout << partion(ar,0,4);

    for(int i = 0; i<5; i++) cout << ar[i] << " ";

    cout << endl;
    quicksort(ar,0,4);
    cout << endl;
    for(int i = 0; i<5; i++) cout << ar[i] << " ";

    return 0;
}