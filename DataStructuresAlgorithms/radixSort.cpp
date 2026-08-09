#include <iostream>
#include <vector>

int max_Val(std::vector<int> a);
void radixSort(std::vector<int>& a);
void countingSort(std::vector<int>& a, int exp);

int main(){
    std::vector<int> array = {84, 599, 150, 0, 420, 76, 9, 1000, 68};
    std::vector<std::vector<int>> matrix (2,std::vector<int>(10,0));

    radixSort(array);
    for(int i : array){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}

int max_Val(std::vector<int> a){
    int tmp = a[a.size()-1];
    for(int i = 0; i < a.size(); i++){
        if(a[i] > tmp){
            tmp = a[i];
        }
    }
    return tmp;
}

void radixSort(std::vector<int>& a){
    int max = max_Val(a);
    for(int exp = 1; max/exp > 0; exp*=10){
        countingSort(a,exp);
    }
}
void countingSort(std::vector<int>& a, int exp){
    std::vector<int> count(10,0);
    std::vector<int> output(a.size(),0);

    for(int i = 0; i < a.size(); i++){
        count[(a[i]/exp)%10]++;
    }
    for(int i = 1; i < 10; i++){
        count[i] = count[i] + count[i-1];
    }

    for(int i = a.size() - 1; i >= 0; i--){
        output[count[(a[i]/exp)%10] - 1] = a[i];
        count[(a[i]/exp)%10]--;
    }
    for(int i = 0; i < a.size(); i++){
        a[i]=output[i];
    }
}