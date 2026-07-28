#include <iostream>
#include <string>


class Light{
    public:
        int lOff = 0;
};

int main(){
    Light light1;
    std::cout << light1.lOff << std::endl;
    light1.lOff = 1;
    std::cout << light1.lOff << std::endl;
    return 0;
}