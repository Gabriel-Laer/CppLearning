#include <iostream>
#include <ctime>
#include <cstdlib>

const int array_Size = 5;

void bubbleSort(int* a, int size);

int main(){
    int array[array_Size] = {0};
    
    srand(time(0));

    for(int i = 0; i < array_Size; i++){
        array[i] = rand() % 101;
    }
    
    bubbleSort(array,array_Size);

    return 0;
}

void bubbleSort(int* a, int size){
    int tmp = 0;
    for (size_t i = 0; i < size - 1; i++){
        for (size_t j = 0; j < size - i - 1; j++){
            if(a[j] > a[j + 1]){
                tmp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = tmp;
            }
        } 
    }
    for (size_t i = 0; i < size; i++){
        std::cout << a[i] << std::endl;
    }
    return;
}