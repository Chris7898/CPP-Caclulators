#include <iostream>
#include <cmath>
#include "const.h"

int main(){
    std::cout <<"****************SACylider*******************";
    std::cout <<"\nEnter the height: ";
    std::cin >> height;

    std::cout <<"Enter the radius: ";
    std::cin >> radius;

    result = (2 * pi * radius * height) + ( 2 * pi * pow(radius, 2));

    std::cout <<"Result:" << result <<'\n';
    std::cout <<"*********************************************";

system("pause");
}