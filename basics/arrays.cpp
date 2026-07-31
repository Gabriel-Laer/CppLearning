#include <iostream>
#include <string>

int main(){
    char hello[] = {'H','e','l','l','o',' ','W','o','r','l','d','!'};

    for(char c : hello){
        std::cout << c << std::endl;
        std::cout << c << std::endl;
    }
    return 0;
}