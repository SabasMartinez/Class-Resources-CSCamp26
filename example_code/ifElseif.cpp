//This will be used to show how if and else if statements work
#include <iostream>

int main() { 

    /*
        Comparisons that exist in CPP:
        >
        <
        <=
        >=
        !=
        == 
    */

    int x = 9;

    // %2 -> if remainder is 0 => even
    // 1 => odd 
    if(x % 2 == 0){
        //do something
        std::cout << "x is even" << std::endl;
    } else {
        //default
        std::cout << "x is odd" << std::endl;
    }

    std::string color = "";

    std::cout << "Please provide a color: red, blue, or green: ";
    std::cin >> color;

    if(color == "red") {
        std::cout << "You picked red" << std::endl;
    } else if(color == "blue") {
        std::cout << "Blue is the color of the sky" << std::endl;
    } else if(color == "green") {
        std::cout << "Green is not a creative color" << std::endl;
    } else {
        std::cout << "You did not pick a valid color, prepare to die." << std::endl;
    }

    return 0;
}