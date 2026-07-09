//g++ fastfood.cpp -o program && ./program

//I am making a fast food simulator

#include <iostream>

//this function greets the user and presents the menu
void menu(){
    std::cout << "Welcome to Wingstop!" << std::endl;
    std::cout << "What would you like?\n" << std::endl;
    std::cout << "1. 10 Boneless ($13.50)\n" << std::endl;
    std::cout << "2. 10 Bone-In ($14.99)\n" << std::endl;
    std::cout << "3. Voodoo Fries ($7.50)\n" << std::endl;
    std::cout << "4. Cup of Ranch ($5.00)\n" << std::endl;
}//end of menu func

//this function forces the user to enter a valid menu choice
std::string invalidChoice() {
    std::string choice;

    //prompts user to enter valid input
    std::cout << "That is not a valid menu item. Try again: ";
    std::cin >> choice;

    //makes enter a valid input
    while (choice != "1" && choice != "2" && choice != "3" && choice != "4") {
        std::cout << "Still not valid. Enter a number between 1 and 4: ";
        std::cin >> choice;
    }//end of while

    return choice;
}//end of invalidChoice func

float price(){
    float total = 0; //holds the total price of the user's order
    bool done = false; //tells the while loop when to stop
    std::string choice; //holds user input
    char yN; //if the user is done ordering (Yes or No)

    while (!done){
        //prompts user input
        std::cout << "Enter the number of the item you want: ";
        std::cin >> choice;

        //if invalid, force correction BEFORE switch
        if (choice != "1" && choice != "2" && choice != "3" && choice != "4"){
            choice = invalidChoice();
        }//end of if

        //based on user input, a certain amount of $$$ will be added to the total
        if (choice == "1"){
            std::cout << "10 Boneless Wings, yummersssss" << std::endl;
            total += 13.50;
        }//end of if

        else if (choice == "2"){
            std::cout << "10 Bone-In, I guess we want to waste money today." << std::endl;
            total += 14.99;
        }//end of else if

        else if (choice == "3"){
            std::cout << "Voodoo Fries, omg those are my favorite" << std::endl;
            total += 7.50;
        }//end of els eif

        else if (choice == "4"){
            std::cout << "A Cup of Ranch, don't worry I drink it too." << std::endl;
            total += 5.00;
        }//end of else if

        // switch (choice){
        //     case 1:
        //         std::cout << "10 Boneless Wings, yummersssss" << std::endl;
        //         total += 13.50;
        //         break;
        //     case 2:
        //         std::cout << "10 Bone-In, I guess we want to waste money today." << std::endl;
        //         total += 14.99;
        //         break;
        //     case 3:
        //         std::cout << "Voodoo Fries, omg those are my favorite" << std::endl;
        //         total += 7.50;
        //         break;
        //     case 4:
        //         std::cout << "A Cup of Ranch, don't worry I drink it too." << std::endl;
        //         total += 5.00;
        //         break;
        // }//end of switch

        //prompts the user to add to their order
        std::cout << "Anything else? (Y/N): ";
        std::cin >> yN;

        //will stop while loop if user prompts to
        if (yN == 'N' || yN == 'n'){
            done = true;
        }//end of if
    }//end of while

    return total;
}//end of price func

int main(){

    menu();

    float total = price();

    std::cout << "Your total is: $" << total << std::endl;

    return 0;
}//end of main
