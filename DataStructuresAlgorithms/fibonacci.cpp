#include <iostream>

void fibonacci(int a, int b, int n);
int fibonacciNew(int n);

int main(){
    int number = 2;
    int fA = 0;
    int fB = 1;
    int fC = 0;

    std::cout << "Usando for loop:\n";
    std::cout << fA << ' ' << fB << ' ';
    for(int i = 0; i < 18; i++){
        fC = fA + fB;
        fA = fB;
        fB = fC;
        std::cout << fC << ' ';
    }
    fA = 0;
    fB = 1;
    std::cout << std::endl;
    std::cout << "Usando recursão(brute force):\n";
    std::cout << fA << ' ' << fB << ' ';
    fibonacci(fA,fB,number);
    std::cout << std::endl;
    std::cout << "Usando recursão(F(n - 1) + F(n - 2)):\n";
    std::cout << fibonacciNew(19) << std::endl;
    return 0;
}

void fibonacci(int a, int b, int n){
    int c = 0;
    if(n <= 19){
        c = a + b;
        std::cout << c << ' ';
        a = b;
        b = c;
        n = n + 1;
        fibonacci(a,b,n);
    }else {
        return;
    }

}

int fibonacciNew(int n){
    if(n <= 1){
        return n;
    }else {
        return fibonacciNew(n-1) + fibonacciNew(n - 2);
    }
}