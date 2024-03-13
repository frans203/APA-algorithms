#include <iostream>

void SelectionSort(int array[], int n){
    for(int i=0;i<n-1;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(array[j] < array[min_index]){
                min_index = j;
            }
        }
        if(min_index != i){
            int temp = array[i];
            array[i] = array[min_index];
            array[min_index] = temp;
            // std::swap(array[i], array[min_index]);
        }
    }
}


void printArray(int array[], int n){
    std::cout<<"[ ";
    for(int i = 0;i<n;i++){
        std::cout<<array[i]<<" ";
    }
    std::cout<<"]";
}

int main(){
    int array[] = {15,6,1,0,1,32,122,1,0,0,0,11,3,2};
    int size = sizeof(array)/sizeof(array[0]);
    SelectionSort(array, size);
    printArray(array, size);
    return 0;
}