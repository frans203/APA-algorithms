#include <iostream>
#include <bits/stdc++.h>

void printArray(int arr[], int size) {
    std::cout << "[ ";
    for(int i=0;i<size;i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << "]";
}

int partition(int arr[], int startIndex, int endIndex){
    int pivot = arr[startIndex];
    int i = startIndex - 1;
    int j = endIndex + 1;
    while (true) {
        do{
            i++;
        } while (arr[i] < pivot);

        do{
            j--;
        } while (arr[j] > pivot);

        if(i >= j) {
            return j;
        }

        std::swap(arr[i], arr[j]);
    }
}

void quickSort(int arr[], int startIndex, int endIndex){
    if(endIndex > startIndex){
        int pivot = partition(arr, startIndex, endIndex);
        quickSort(arr, startIndex, pivot);
        quickSort(arr, pivot + 1, endIndex);
    }else {
        return;
    }
}

int main() {
    int arr[] = {12,3,1,123, 99, 19231893, 91823,13, 0, 0};
    int size = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, size - 1);
    printArray(arr, size);
    return 0;
}