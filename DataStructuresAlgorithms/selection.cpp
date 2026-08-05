#include <iostream>
#include <ctime>
#include <cstdlib>

const int ARRAY_SIZE = 20;

void selectionSort(int* a, int size);

int main(){
    int array[ARRAY_SIZE] = {0};

    srand(time(0));

    for(int i = 0; i < ARRAY_SIZE; i++){
        array[i] = rand() % 101;
    }

    std::cout << "Unsorted: ";
    for (size_t i = 0; i < ARRAY_SIZE; i++){
        std::cout << array[i] << ' ';
    }
    std::cout << '\n';

    selectionSort(array,ARRAY_SIZE);
    return 0;
}

void selectionSort(int* a, int size){
    int min_index = 0;
    int tmp = 0;
    for(int i = 0; i < size; i++){
        min_index = i;
        for(int j = i + 1; j < size; j ++){
            if(a[j] < a[min_index]){
                min_index = j;
            }
        }
        tmp = a[i];
        a[i] = a[min_index];
        a[min_index] = tmp;
    }

    std::cout << "Sorted: ";
    for (size_t i = 0; i < size; i++){
        std::cout << a[i] << ' ';
    }
    std::cout << '\n';
}