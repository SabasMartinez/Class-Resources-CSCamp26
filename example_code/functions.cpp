/*
    File will be used to go over function definitions...
*/
#include <iostream>
#include <cmath>

//These are our function declarations
int sum(int a, int b);
int sub(int a, int b);
float pyth(float a, float b);


int main() {
    int one = 10;
    int two = 11;
    int three = 189;

    std::cout << one + two << std::endl;
    std::cout << sum(one, two) << std::endl;


    float a1 = 3.0;
    float b1 = 2.4;
    float a2 = 9.3;
    float b2 = 5.3;

    std::cout << sqrt(a1*a1 + b1*b1) << std::endl;
    std::cout << pyth(a2, b2) << std::endl;


    return 0;
}

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

//c=sqrt(a^2 + b^2)
//this will return c ** not c^2
float pyth(float a, float b) {
    return sqrt(a * a + b * b);
}