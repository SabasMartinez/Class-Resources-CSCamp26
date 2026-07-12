//g++ fightGame.cpp -o program && ./program

#include <iostream>
#include <random>

int randomNumber(){

    std::random_device rd; //gets a random seed from our hardware
    std::mt19937 gen(rd()); //initializes our standard engine with seed 
    std::uniform_int_distribution<int> distrib(1, 50); //defines our range (min and max)
    int randNum = distrib(gen); //holds our random number generator value

    return randNum;
}//end of randomNumber func

/*
MINI PROGRAMMING LESSON:
In this function, we are taking health away from the user's and enemy's HP.
We want the health to be updated in the main every time the function is called, but
how can we when variables are only specific to the function they're in?
Notice the & symbol in the beginning of the variable names (the names also being the same to the ones in main).
The & symbol means we are referring to the real variable in the main function;
that's how we can save the amount of HP every turn!
Neat, right?
*/
void combat(int &userHP, int &enemyHP){

    //if attack successful
    if (randomNumber() > 10){
        enemyHP = enemyHP - randomNumber();//dragon's new health stat after attack
        std::cout << "Your attack on the dragon was successful, it now has " << enemyHP << " HP\n" << std::endl;
         userHP = userHP - randomNumber();//user's new heath stat after attack
        std::cout << "The dragon attacks you back, you now have " << userHP << " HP.\n" << std::endl;
    }//end of if
    //if attack unsuccessful
     else{
        std::cout << "Your attack was NOT successful.\n" << std::endl;
        userHP = userHP - randomNumber();//user's new heath stat after attack
        std::cout << "The dragon attacks you back, you now have " << userHP << " HP.\n" << std::endl;
    }//end of else
}//end of combat func


int main(){
    

    //variables
    int userHP = 100;//user HP
    int enemyHP = 100;//enemy HP
    char choice;//user input

    std::cout << "You encounter a dragon.\n"
    << "What do you do?\n"
    << "A. Fight\nB. Flee\n" << std::endl;
    std::cin >> choice;

    //if user decides to fight
    switch (choice){
        case 'A':
        while(userHP > 0 && enemyHP > 0){//loop will continue until user's or enemy's HP reaches zero (0)
            std::cout << "How do you attack?\n"
            << "A. Left-Hand Punch\nB. Right-Hand Punch\n" << std::endl;
            std::cin >> choice;

            switch (choice){
                case 'A':
                    std::cout << "You throw a punch with your left hand.\n" << std::endl;
                    combat(userHP, enemyHP);//HP updates
                    break;
                case 'B':
                    std::cout << "You throw a punch with your right hand.\n" << std::endl;
                    combat(userHP, enemyHP);//HP updates
            }//end of switch

        }//end of while

        //if user dies
        if (userHP < 1){
            std::cout << "You ran out of HP.\n"
            << "\n\nDEFEAT" << std::endl;
        }//end of if

        //if enemy dies
        else if (enemyHP < 1){
            std::cout << "The dragon ran out of HP!\n"
            << "\n\nVICTORY!!!" << std::endl;
        }//end of else if
        break;

        //if user decides to flee
        case 'B':
        int roll = randomNumber();
            if (roll > 25){//if user if successful
                std::cout << "You rolled a " << roll << "/50\n"
                << "You flee and are successful! ...wuss\n"
                << "You... win?" << std::endl;
            }//end of if
            else{
                std::cout << "You rolled a " << roll << "/50\n"
                << "You turn your back for a second too long and the dragon gobbles you up."
                << "\n\nYOU DIED." << std::endl;
            }//end of else
            break;
    }//end of switch

    return 0;
}//end of main