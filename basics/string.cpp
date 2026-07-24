#include <iostream>
#include <string>

int main(){
    std::string firstName = "Gabriel";
    std::string lastName = "Marques";
    std::string fullName = "7";
    //concatenação manual
    std::cout << firstName + " " + lastName << '\n';
    // concatenação usando append()
    fullName = lastName.append(firstName);
    std::cout << fullName << std::endl;
    return 0;
}