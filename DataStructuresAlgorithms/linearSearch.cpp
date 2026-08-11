#include <iostream>
#include <vector>

int linearSearch(std::vector<int>& a, int x);

int main(){
    std::vector<int> array= {3,2,1,5,8};
    int x = 0;
    std::cout << linearSearch(array, x);
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