#include <iostream>

const int array_Size = 20; 

int main(){
    int array[] = {0};

    for(int i = 0; i < array_Size; i++){
        std::cout << array[i] << std::endl;
    }
    return 0;
}