#include <iostream>
#include <vector>

void countingSort(std::vector<int>& a);
int max_Val(std::vector<int> a);

int main(){
    std::vector<int> array = {4, 2, 2, 6, 0, 3, 1, 6, 5, 2, 3};

    countingSort(array);

    for(int i : array){
        std::cout << i << ' ';
    }
    std::cout << std::endl;
    return 0;
}

void countingSort(std::vector<int>& a){
    int max_Value = max_Val(a);
    int index = 0;
    std::vector<int> count_Freq(max_Value + 1, 0);

    for(int i = 0; i < a.size(); i++){
        count_Freq[a[i]]++;
    }

    for (int i = 0; i <= max_Value; i++){
        while (count_Freq[i] > 0){
            a[index++] = i; //index++ is a posfix increment
            count_Freq[i]--;
        }
    }
}

int max_Val(std::vector<int> a){
    int max = a[a.size() - 1];
    for(int n : a){
        if (n > max){
            max = n;
        } 
    }
    return max;
}