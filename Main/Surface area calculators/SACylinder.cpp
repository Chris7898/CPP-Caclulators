#include <iostream>
#include <cmath>


int main(){

    std::cout <<"Enter the height: ";
    std::cin >> height;

    std::cout <<"Enter the radius: ";
    std::cin >> radius;

    result = (2 * pi * radius * height) + ( 2 * pi * pow(radius, 2));

    std::cout <<"Result:" << result <<'\n';

    return 0;
}