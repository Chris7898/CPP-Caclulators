#include <iostream>
#include "const.h"

int main(){
    std::cout <<"***************Three Num Calc<<***************";
    std::cout <<"\nEnter either (+ - * /)";
    std::cin >> op;

    std::cout <<"\nEnter #1: ";
    std::cin >> num1;

    std::cout <<"Enter #2: ";
    std::cin >> num2;

    std::cout <<"Enter #3: ";
    std::cin >> num3;

switch(op){
    case '+':
        result = num1 + num2 + num3;
        std::cout <<"Result: " << result << '\n';
    break;
    
    case '-':
        result = num1 - num2 - num3;
        std::cout <<"Result: " << result << '\n';
    break;
    
    case '*':
        result = num1 * num2 * num3;
        std::cout <<"Result: " << result << '\n';
    break;
    
    case '/':
        result = num1 / num2 / num3;
        std::cout <<"Result: " << result << '\n';
    break;
}
std::cout <<"*************************************************";

system("pause");
    
}