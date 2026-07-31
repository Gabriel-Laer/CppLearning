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
    for (size_t i = 0; i < size - 1; i++){
        std::cout << "I: " << i << ' ';
    }
    
}