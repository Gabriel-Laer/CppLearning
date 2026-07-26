#include <iostream>
#include <string>

int main(){
    int numberOrign = 10;
    int &numberCopy = numberOrign;// reference é um apelido(alias) para uma variavel existente, so pode ser definada desse modo
    int* pointer = &numberCopy;// definindo um pointer, nele se armazena endereço de memoria

    std::cout << "Usando Reference variable " << numberCopy << std::endl;
    std::cout << "Endereço de memoria de numberOrign: " << pointer << std::endl;
    return 0;
}