#include <iostream>
void insertionSort(int* array, int size);

int main(){
    int a[] = {64, 34, 25, 12, 22, 11, 90, 5};
    int size = sizeof(a)/sizeof(a[0]);

    insertionSort(a,size);
    for(int i : a){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}

void insertionSort(int* array, int size){
    int insertIndex = 0;
    int currentValue = 0;
    int j = 0;
    for (int i = 1; i < size; i++){
        currentValue = array[i];
        insertIndex = i;
        j = i - 1;
        while (j >= 0 && array[j] > currentValue){
            array[j+1] = array[j];
            insertIndex = j;
            j--;
        }
        array[insertIndex] = currentValue;
    }
    
}