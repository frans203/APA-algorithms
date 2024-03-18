#include <iostream>
#include <vector>
using namespace std;

void printArray(int array[], int n){
    std::cout<<"[ ";
    for(int i = 0;i<n;i++){
        std::cout<<array[i]<<" ";
    }
    std::cout<<"]";
}

void insertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int pivot = arr[i];
        int j = i -1;
        while(j>=0 && arr[j] > pivot){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = pivot;
    }
}

int main(){
    int arr[] = {12,3,44,1,0,1,2, 0,0,0,0,0,32,1,32};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, size);
    //ON^2 WORST CASE
    // ON BEST CASE
    //INPLACE
    //STABLE
    printArray(arr, size);
    return 0;
}