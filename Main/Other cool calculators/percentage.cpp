// This file finds the percent of a given number.

#include <iostream>
#include <Cmath>
#include "const.h"

int main(){

    std::cout <<"\n***************Percentage Calculator***************\n";
    std::cout <<"Enter the number you would like to find the percentage of: ";
    std::cin >> num1;
    
    std::cout <<"What percent of the number would you like to find?\nPlease enter the what percent you would like: ";
    std::cin >> num2;

    result = num1 / 100 * num2;

     std::cout << "result: " << result << '\n';

std::cout <<"**************************************************";

return 0;
}