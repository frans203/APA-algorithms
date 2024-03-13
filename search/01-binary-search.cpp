#include <bits/stdc++.h>
void printArray( int array[], int length) {
    for(int i=0;i<length;i++){
        std::cout << array[i] <<std::endl;
    }
    return;
}

int binarySearch(int array[], int element, int leftIndex, int rightIndex){
    int middleElementIndex = (leftIndex + rightIndex )/2;
    if(element > array[middleElementIndex]){
        return binarySearch(array, element, middleElementIndex + 1, rightIndex);
    }
    if(element < array[middleElementIndex]){
        return binarySearch(array, element, leftIndex, middleElementIndex - 1);

    }
    if(element == array[middleElementIndex]){
        return middleElementIndex;
    }

    return -1;
}

int main() {
    int array[] = {14, 20, 25, 250, 300};
    int size = sizeof(array)/sizeof(array[0]);
    printArray(array, size);
    int positionOfelement = binarySearch(array, 25, 0, size - 1);
    std::cout << "FINDING ELEMENT 25 IN ARRAY, INDEX IS: " << positionOfelement << std::endl;
    return 0;
}