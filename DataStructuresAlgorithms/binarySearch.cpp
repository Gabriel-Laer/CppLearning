#include <iostream>
#include <string>
#include <vector>

int binarySearch(std::vector<int>& a, int target);

int main(){
    std::vector<int> array = {1,2,3,4,5,7};
    int x = 7;
    std::string result = ((binarySearch(array, x) == -1) ? "No found." : "Value found.");
    std::cout << result << std::endl;
    return 0;
}

int binarySearch(std::vector<int>& a, int target){
    int left = 0;
    int right = a.size() - 1;
    int mid = 0;

    while(left <= right){
        mid = (left + right)/2;
        if(a[mid] == target){
            return mid;
        }
        if(a[mid] < target){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return - 1;
}