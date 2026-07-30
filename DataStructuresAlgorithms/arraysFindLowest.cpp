#include <iostream>
#include <ctime>
#include <cstdlib>

const int array_Size = 20; 
int findLowest(int a[], int size);

int main(){
    int array[array_Size] = {0};
    int lowest = 0;
    srand(time(0));

    for(int i = 0; i < array_Size; i++){
        array[i] = rand() % 101;
    }

    lowest = findLowest(array,array_Size);
    std::cout << "Lowest number: " << lowest << std::endl;
    return 0;
}

int findLowest(int a[], int size){
    int lowest = a[rand() % array_Size];
    for(int i = 0; i < size; i++){
        std::cout << a[i] << std::endl;
        if (lowest > a[i]){
            lowest = a[i];
        }
    }
    return lowest;
}