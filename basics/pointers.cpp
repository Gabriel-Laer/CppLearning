#include <iostream>
#include <string>

int main(){
    int numberOrign = 10;
    int &numberCopy = numberOrign;

    std::cout << numberCopy << std::endl;
    return 0;
}