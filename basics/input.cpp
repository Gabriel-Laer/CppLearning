#include <iostream>
#include <string>

int main(){
    int x = 0; int y = 0;

    std::cout << "Digite um numero:" << std::endl;
    std::cin >> x;
    std::cout << "Digite outro numero:" << std::endl;
    std::cin >> y;

    std::cout << x + y << std::endl;
    return 0;
}