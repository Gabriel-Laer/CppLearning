#include <iostream>
#include <vector>

void mergeSort(std::vector<double>& a, int start, int end);
void merge(std::vector<double> &a, int start, int mid, int end);
int main(){
    std::vector<double> array = {3, 7, 6, -10, 15, 23.5, 55, -13};

    mergeSort(array, 0, array.size() - 1);

    for(double n : array){
        std::cout << n << " ";
    }
    std::cout <<std::endl;
    return 0;
}

void mergeSort(std::vector<double>& a, int start, int end){
    int mid = 0;
    if(start < end){
        mid = (start + end) / 2;
        mergeSort(a,start, mid);
        mergeSort(a, mid + 1, end);
        merge(a, start, mid, end);
    }
}

void merge(std::vector<double> &a, int start, int mid, int end){
    int i,j,k;
    int n1 = mid-start + 1;
    int n2 = end - mid;
    std::vector<double> left(n1, 0);
    std::vector<double> right(n2, 0);

    for(i = 0; i < n1; i++){
        left[i] = a[start + i];
    }
    for(j = 0; j < n2; j++){
        right[j] = a[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = start;

    while(i < n1 && j < n2){
        if(left[i] <= right[j]){
            a[k] = left[i];
            i++;
        }else{
            a[k] = right[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        a[k] = left[i];
        i++;
        k++;
    }
    while(j < n2){
        a[k] = right[j];
        j++;
        k++;
    }
}