#include <iostream>
using namespace std;

void merge(int arr[], int si, int mid, int ei){
    int i,j,k;
    int n1 = mid - si + 1;
    int n2 = ei - mid;

    int tempArray1[n1];
    int tempArray2[n2];

    for(i = 0; i<n1; i++){
        tempArray1[i] = arr[si + i];
    }

    for(j = 0; j<n2; j++){
        tempArray2[j] = arr[mid+1+j];
    }

    i = 0;
    j = 0;
    k = si;

    while(i<n1 && j<n2){
        if(tempArray1[i] < tempArray2[j]){
            arr[k] = tempArray1[i];
            i++;
        }
        else{
            arr[k] = tempArray2[j];
            j++;
        } k++;
    }

        while(j<n2){
            arr[k] = tempArray2[j];
            k++;
            j++;
        }
        while(i<n1){
            arr[k] = tempArray1[i];
            i++;
            k++;
        }
    
    
}

void merge2(int arr[], int si, int mid, int ei){
    int i = si, j = mid+1, k = 1;

    int tempArr[5];
    while(i<=mid && j<=ei){
        if(arr[i] <= arr[j]){
            tempArr[k] = arr[i];
            i++;
        }
        else{
            tempArr[k] = arr[j];
            j++;
        } k++;
    }

    if(i>mid){
        while(j<=ei){
            tempArr[k] = arr[j];
            j++;
            k++;
        }
    }
    else{
        while(i<=mid){
            tempArr[k] = arr[i];
            i++;
            k++;
        }
    }
    for(k = 1; k<=ei; k++){
        arr[k] = tempArr[k];
    }
}

void mergeSort(int arr[], int si, int ei){
    if(si >= ei) return;
    else{
        int mid = (si + ei)/2;
        mergeSort(arr,si,mid);
        mergeSort(arr,mid+1,ei);
        merge(arr,si,mid,ei);
    }
}

int main(){

    // Write your code here......

    int ar[] = {23, 43, 12, 55, 22};

    for(int i = 0; i<5; i++) cout << ar[i] << " ";

    mergeSort(ar,0,4);
    cout << endl;
    for(int i = 0; i<5; i++) cout << ar[i] << " ";

    return 0;
}