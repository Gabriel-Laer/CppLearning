#include <iostream>
#include <string>

int main(){
    int* ptr = new int; // para variaveis
    *ptr = 666;
    int num = 0;

    std::cout << ptr << std::endl;
    std::cout << &ptr << std::endl;

    std::cout << "Digite a quantidade de numeros no array: ";
    std::cin >> num;

    int* array = new int[num];

    for (size_t i = 0; i < num; i++){
        array[i] = i;
    }
    
    for (size_t i = 0; i < num; i++){
        std::cout << array[i] << std::endl;
    }

    delete ptr;
    delete[] array;

    return 0;
}