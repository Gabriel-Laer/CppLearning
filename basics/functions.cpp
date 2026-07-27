#include <iostream>
#include <string>

void fullName(std::string fname);

int main(){
    std::string name = "John";
    fullName(name);
    return 0;
}

void fullName(std::string fname){
    std::cout << fname + ' ' + "Will" << std::endl;
}