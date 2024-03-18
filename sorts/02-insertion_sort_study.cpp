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

void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int minElementIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[minElementIndex]){
                minElementIndex = j;
            }
        }

        if(minElementIndex != i){
            std::swap(arr[minElementIndex], arr[i]);
        }
    }
}


int main(){
    int arr[] = {12,3,44,1,0,1,2, 0,0,0,0,0,32,1,32};
    int size = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, size);
    printArray(arr, size);

    return 0;
}