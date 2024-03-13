#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void printArray(int array[], int n){
    cout << "[ ";
    for(int i=0;i<n;i++){
        cout << array[i] << " ";
    }
    cout << "]";

}

void merge(int array[], int startIndex, int middleIndex, int endIndex) {
    int const subArrayLeftSize = middleIndex - startIndex + 1;
    int const subArrayRightSize = endIndex - middleIndex;

    int leftArray[subArrayLeftSize + 1];
    int rightArray[subArrayRightSize + 1];

    
    for(int i=0;i<subArrayLeftSize;i++){
        leftArray[i] = array[startIndex + i];
    }



    for(int i=0;i<subArrayRightSize;i++){
        rightArray[i] = array[middleIndex + i + 1];
    }

    leftArray[subArrayLeftSize] = 9999999;
    rightArray[subArrayRightSize] = 9999999;


    int i = 0, j = 0;
    for(int k = startIndex; k<=endIndex; k++){
        if(leftArray[i] < rightArray[j]){
            array[k] = leftArray[i];
            i++;
        }
        if(leftArray[i] >= rightArray[j]){
            array[k] = rightArray[j];
            j++;
        }
    } 


}

void mergeSort(int array[], int leftIndex, int rightIndex) {
    if(leftIndex < rightIndex){
        int middleIndex = floor((leftIndex + rightIndex)/2);
        mergeSort(array, leftIndex, middleIndex);
        mergeSort(array, middleIndex + 1, rightIndex);
        merge(array, leftIndex, middleIndex, rightIndex);
    }
}


int main() {
    int arr[] = {1,335, 5,99,322,12,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}