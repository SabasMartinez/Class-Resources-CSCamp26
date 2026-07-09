//g++ rand.cpp -o program && ./program
//we will practice random number generation

#include <iostream>
#include <random>
//#include <cstdlib> //allows u to use rand()
//#include <ctime> //allows us to use time()

int main(){

    std::random_device rd; //gets a random seed from our hardware

    std::mt19937 gen(rd()); //initializes our standard engine with seed 

    std::uniform_int_distribution<int> distrib(1, 1000); //defines our range (min and max)

    int randNum = distrib(gen); //holds our randomly generatorated number
    std::string guess;

    std::cout << "Guess if the number will be even or odd: " << std:: endl;
    std:: cin >> guess;

    int evenOdd = randNum % 2;
    std::string answer;

    switch (evenOdd){
        case 0:
            answer = "even";
            break;
        case 1:
            answer = "odd";
            break;
    }//end of switch

    //if user answers correctly
    if (answer == guess){
        std::cout << "Congrats! The answer was " << answer << " and the number was " << randNum << std::endl;
    }//end of if

    //if user answers wrong
    else{
        std::cout << "WRONG! The answer was " << answer << " and the number was " << randNum << std::endl;
    }//end of else






    // std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // //variables
    // int randNum = (std::rand() % 10) + 1;
    // int guess;

    // std::cout << "WELCOME TO MY NUMBER GUESSING GAME\nWIN OR PERISH" << std::endl;
    // std::cout << "Guess a number 1 - 10" << std::endl;

    // std::cin >> guess;

    // if (guess == randNum){
    //     std::cout << "Congrats, you win!" << std::endl;
    // }//end of if

    // else{
    //     std::cout << "WRONG. THE ANSWER WAS " << randNum << ". PERISH" << std::endl;
    // }//end of else

    // std::string guess;
    // std::string answer;

    // //recieves user input
    // std::cout << "Guess an animal: " << std::endl;
    // std::cin >> guess;

    // //picks a random animal based off our random num generator
    // switch(randNum){
    //     case 1:
    //         answer = "lion";
    //         break;
    //     case 2:
    //         answer = "zebra";
    //         break;
    //     case 3:
    //         answer = "bear";
    //         break;
    //     case 4:
    //         answer = "fish";
    //         break;
    //     case 5:
    //         answer = "chicken";
    //         break;
    // }//end of switch

    // //if user answer correctly
    // if (answer == guess){
    //     std::cout << "CORRECT!" << std::endl;
    // }//end of if

    // //if user answers wrong
    // else{
    //     std::cout << "WRONG!!! The answer was: " << answer << std::endl;
    // }//end of else

    return 0;
}//end of main