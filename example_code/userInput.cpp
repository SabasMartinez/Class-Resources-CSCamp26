/* This file will take user input and display it */
#include <iostream>

//Main function, the codes executes here
int main() {
    std::string usrName;
    int usrAge;
    std::cout << "What is your username?" << std::endl;
    std::cin >> usrName;
    std::cout << "Welcome, " << usrName << "!" << std::endl;

    std::cout << "Please enter your age: " << std::endl;
    std::cin >> usrAge;
    std::cout << "You are " << usrAge << " years old." << std::endl;
    return 0;
}