#include <iostream>
#include <string>

int main(){
    int x = 10;
    int y = 20;
    std::string great = "x is great than y";
    std::string less = "x is less than y";

    if (x > y)
    {
        std::cout << great << std::endl;
    }else {
        std::cout << less << std::endl;
    }
    
    return 0;
}