#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ofstream myFile("nome.txt");
    std::string nome;
    myFile << "Gabriel Silva.";
    myFile.close();

    std::ifstream readFile("nome.txt");

    while(getline(readFile,nome)){
        std::cout << nome << std::endl;
    }

    readFile.close();
    return 0;
}