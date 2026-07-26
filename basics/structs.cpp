#include <iostream>
#include <string>

struct base {
    char c;
    int x;
    int y;
    double z;
};
int main(){
    base a;

    a.c = 'H';
    a.x = 10;
    a.y = 12;
    a.z = 12.25;

    std::cout << a.c << a.x << a.y << a.z << std::endl;
    return 0;
}