//This file will show how vectors are created, data accessed and data inserted.
#include <iostream>
#include <vector>

//Main function, code executes here
int main() {
    std::vector<int> numbers;
    numbers.push_back(9); // 9
    numbers.push_back(32); // 9, 32

    int usrNum;

    std::cout << "Please enter a number: " << std::endl;
    std::cin >> usrNum; // usrNum 10
    numbers.insert(numbers.begin(), usrNum); // 10, 9, 32

    std::cout << "element @" << 0 << ": " << numbers[0] << std::endl;
    std::cout << "element @" << 1 << ": " << numbers[1] << std::endl;
    std::cout << "element @" << 2 << ": " << numbers[2] << std::endl;
    return 0;
}