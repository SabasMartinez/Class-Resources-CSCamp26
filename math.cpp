//g++ math.cpp -o program && ./program

//learning how to use functions in main

#include <iostream>

void greet(){
    std::cout << "Welcome to my calc (that's short for calculator btw)!" << std::endl;
    std::cout << "You can use the following operators:" << std::endl;
    std::cout << "+\n-\n*\n/\n" << std::endl;
}//end of greet func

int multiply(int a, int b){
    return a * b;
}//end of multiply func

int divide(int a, int b){
    return a / b;
}//end of divide func

int addition(int a, int b){
    return a + b;
}//end of addition func

int subtraction(int a, int b){
    return a - b;
}//end of subtraction func

int math(int a, int b, char op){
    switch(op){
        case '+':
            return addition(a, b);
        case '-':
            return subtraction(a, b);
        case '*':
            return multiply(a, b);
        case '/':
            return divide(a, b);
        default:
            std::cout << "Invalid operator!" << std::endl;
            return 0;
    }//end of switch
}//end of math func

char userError(){
    char op;
    std::cout << "What operator should be applied?" << std::endl;
    std::cin >> op;

    while (op != '+' && op != '-' && op != '*' && op != '/'){
        std::cout << "That is not a valid operator, try again:" << std::endl;
        std::cin >> op;
    }//end of while
    return op;
}

int main(){

    int a;
    int b;
    char op;

   greet();

    std::cout << "Give a number!" << std::endl;
    std::cin >> a;

    std::cout << "Give me another number plz" << std::endl;
    std::cin >> b;

    op = userError();

    int answer = math(a, b, op);
    std::cout << "Answer: " << answer << std::endl;

    return 0;
}//end of main


