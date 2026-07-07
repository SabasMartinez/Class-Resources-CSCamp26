/*
    @file This is a file that demonstrates the use of vectors in C++
    @author Sabas Martinez
    @details This program will take user input and store each word into a vector
    until the keyword "quit" is entered and then it will print a sentence based on
    the words stored in the vector.
*/
#include <iostream>
#include <vector>

//This is our main function
int main(){
    std::vector<std::string> usrWords;
    std::string usrIn;
    
    while(usrIn != "quit"){
        std::cin >> usrIn;
        if(usrIn != "quit"){
            usrWords.push_back(usrIn);
        }
    }

    for(int i = 0; i < usrWords.size(); i++){
        std::cout << usrWords[i];
        if(i < usrWords.size() - 1){
            std::cout << " ";
        }
    }
    std::cout << "." << std::endl;

    return 0;
}