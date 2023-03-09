#include <iostream>
using namespace std;

int partion(int arr[], int si, int ei){
    int i = si;
    int j = ei;
    cout << "si " << si << "ei " << ei;
    int pivotIndex = 0; 
    for(i; i < ei; i++){
        if(arr[i] <= arr[si]) pivotIndex++;
    }
    int temp = arr[si];
    arr[si] = arr[pivotIndex];
    arr[pivotIndex] = temp;
    i = si;
    j = ei;
    while(i < pivotIndex && j > pivotIndex){
        cout << "i "<< i << endl;
        if(arr[i] <= arr[pivotIndex]) i++;
        if(arr[j] > arr[pivotIndex]) j--;
        if(arr[i] > arr[pivotIndex] && arr[j] < arr[pivotIndex]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    return pivotIndex;
}
void quicksort(int * arr, int si, int ei){
    if(si >= ei) return;
    else{

        int pivotIndex = partion(arr,si,ei);
        cout << pivotIndex << endl;
        quicksort(arr,si,pivotIndex-1);
        quicksort(arr,pivotIndex+1,ei);
    }
}
int main(){

    int ar[] = {23, 43, 12, 55, 22};

    // cout << partion(ar,0,4);

    for(int i = 0; i<5; i++) cout << ar[i] << " ";

    quicksort(ar,0,4);
    cout << endl;
    for(int i = 0; i<5; i++) cout << ar[i] << " ";

    return 0;
}