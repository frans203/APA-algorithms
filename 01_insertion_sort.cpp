#include <iostream>
#include <vector>
using namespace std;
class InsertionSort {
    public:
    vector<int> insertionSort(vector<int> arr){
        for(int i=1;i<arr.size();i++){
            int pivot = arr[i];
            int j = i -1;
            while(j>=0 && pivot < arr[j]){
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = pivot; 
        }
        return arr;
    }
};

void printArray(vector<int> arr){
    std::cout << "[ ";
    for(int i=0;i<arr.size();i++){
        std::cout << arr[i] << " ";
    }
    std::cout << "]";

}

int main(){
    vector<int> arr = {12,3,44,1,0,1,2, 0,0,0,0,0,32,1,32};
    vector<int> sortedArray = InsertionSort().insertionSort(arr);
    printArray(sortedArray);
    return 0;
}