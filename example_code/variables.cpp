/*
Description: This file is a refernce guide that goes over initializing variables,
assigning variables and using variables.
*/
#include <iostream>

//This is my main function, it will have many variables
int main() {
    std::string str = "Hello World!";
    int num = 4;
    bool trueFalse = false; //Boolean can be true or false, 0 or 1
    float decNum = 4.78;
    double bigDecNum = 3.03980492830928034982093198123128937;
    char symbol = 'C';

    std::cout << str << std::endl;
    std::cout << num << std::endl;
    std::cout << trueFalse << std::endl;
    std::cout << decNum << std::endl;
    std::cout << bigDecNum << std::endl;
    std::cout << symbol << std::endl;

    return 0;
}
