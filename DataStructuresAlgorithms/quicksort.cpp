#include <iostream>

void quicksort(int* a, int left, int right);
int partition(int* a, int left, int right);

int main(){
    int array[] = {64, 34, 25, 12, 22, 11, 90, 5};
    int n = sizeof(array) / sizeof(array[0]);

    quicksort(array, 0, n - 1);

    for (size_t i = 0; i < n; i++){
        std::cout << array[i] << std::endl;
    }
    
    return 0; 
}

void quicksort(int* a, int left, int right){
    int pivotIndex = 0;
    if(left < right){
        pivotIndex = partition(a,left,right);
        quicksort(a, left, pivotIndex - 1);
        quicksort(a, pivotIndex + 1, right);
    }
}

int partition(int* a, int left, int right){
    int i = left - 1;
    int pivot = a[right];
    int tmp = 0;
    for(int j = left; j < right; j++){
        if(a[j] <= pivot){
            i++;
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
        }
    }
    tmp = a[i + 1];
    a[i + 1] = a[right];
    a[right] = tmp;
    return i + 1;
}