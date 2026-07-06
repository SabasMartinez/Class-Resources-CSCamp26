//This will be used to show the different kinds of loops work in CPP
#include <iostream>
#include <unistd.h>

int main() {

    for (int i = 0; i < 10; i++) { 
        std::cout << i << std::endl;
    }

    int j = 9;
    while(j >= 0) {
        std::cout << j << std::endl;
        j--;
    }

    // While loop until user inputs stop

    std::string usrInput = "go";
    while(usrInput != "stop") {

        std::cout << "enter input: (Enter stop to stop execution)" << std::endl;
        // std::cin >> usrInput;
        std::getline(std::cin, usrInput);
        std::cout << "You entered: " << usrInput << std::endl;
    }

    int i = 0;
    while (true) {
        std::cout << i << std::endl;
        sleep(1); // Sleep for 1 second
        i++;
    }

    return 0;
}