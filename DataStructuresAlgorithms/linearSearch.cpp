#include <iostream>
#include <string>
#include <vector>

int linearSearch(std::vector<int>& a, int x);

int main(){
    std::vector<int> array= {3,2,1,5,8};
    int x = 8;
    std::string result = ((linearSearch(array, x) == -1) ? "No found." : "Value found.");
    std::cout << result << std::endl;
    return 0;
}

int linearSearch(std::vector<int>& a, int x){
    for (size_t i = 0; i < a.size(); i++){
        if(a[i] == x){
            return i;
        }
    }
    return -1;
}