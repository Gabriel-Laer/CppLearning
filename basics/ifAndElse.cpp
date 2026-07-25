#include <iostream>
#include <string>

int main(){
    int x = 10;
    int y = 20;
    std::string test = (x > y) ? "yes x is great than y" : "no x is less than y";
    std::string great = "x is great than y";
    std::string less = "x is less than y";

    if (x > y)
    {
        std::cout << great << std::endl;
    }else {
        std::cout << less << std::endl;
    }
    
    std::cout << test << std::endl;

    return 0;
}