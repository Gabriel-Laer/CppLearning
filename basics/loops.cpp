#include <iostream>
#include <string>

int main(){
    int x = 0;
    std::string loop = "x is now ";
    std::string hello = "Hello World!";
    while (x <= 2){
        std::cout << "while "<< loop + ' ' << x << '\n';
        x++;
    }
    for (x = 0; x < 2; x++){
        std::cout << "For "<< loop + ' ' << x << '\n';
    }
    //foreach serve para fazer loop em elementos com arrays e estruturas de dados
    for(char c : hello){
        std::cout << c << '\n';
    }
    return 0;
}