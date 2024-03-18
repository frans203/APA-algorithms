#include <bits/stdc++.h>
#include <iostream>

void printArray(int arr[], int length){
    std::cout << "[ ";
    
    
    for(int i=0;i<length;i++){
        std::cout << arr[i] << ' ';
    }

    std::cout << "]";

    return;
}

int leftChild(int i) {
    return 2*i + 1;
}

int rightChild(int i) {
    return 2*i + 2;
}

//heapSize = legth of arr
void maxHeapify(int arr[], int i, int heapSize) {
    int leftElementIndex = leftChild(i);
    int rightElementIndex = rightChild(i);
    int biggerElementIndex = i;

    if(leftElementIndex < heapSize && arr[leftElementIndex] > arr[biggerElementIndex]){
        biggerElementIndex = leftElementIndex;
    }

    if(rightElementIndex < heapSize && arr[rightElementIndex] > arr[biggerElementIndex]){
        biggerElementIndex = rightElementIndex;
    }


    if(biggerElementIndex != i) {
        std::swap(arr[i], arr[biggerElementIndex]);
        maxHeapify(arr, biggerElementIndex, heapSize);
    }

}

void buildMaxHeap(int arr[], int heapSize){
    int i = std::floor(heapSize/2);
    i = i -1;
    for(i;i>=0;--i){
        maxHeapify(arr, i, heapSize);
    }
}

void heapSort(int arr[], int heapSize){
    int heapLength = heapSize;
    buildMaxHeap(arr, heapSize);
    for(int i=heapLength-1;i>=0;i--){
        std::swap(arr[0], arr[i]);
        heapLength = heapLength - 1;
        maxHeapify(arr, 0, heapLength);
    }
}

int main(){
    int arr[] = {323,15, 13,50,1231,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    heapSort(arr, size);
    printArray(arr, size);
    
    return 0;
}