//This will implement a sentence creating function
#include <iostream>
#include <string>

//This function will take a word and make a sentence
std::string makeSentence(std::string usrWord);

int main(){

    std::string usrInput;
    std::cout << "Please enter your name: " << std::endl;
    std::cin >> usrInput;

    std::cout << makeSentence(usrInput) << std::endl;

    std::string mySentence = makeSentence(usrInput);
    std::cout << mySentence << std::endl;

    return 0;
}

std::string makeSentence(std::string usrWord) {
    return "Hi, " + usrWord + " welcome to my program written in the computer science camp!";
}