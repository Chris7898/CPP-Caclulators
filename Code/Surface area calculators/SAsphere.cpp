// This file find the surface area of a sphere.

#include <iostream>
#include <cmath>
#include "const.h"

int main(){

std::cout <<"\n****************Surface area of a sphere calculator****************\n";

std::cout <<"\nwhat is the radius of your sphere?\n";
std::cout <<"Enter the radius: ";
std::cin >> radius;

result = 4 * pi * radius * radius;

 std::cout << "result: " << result << '\n';
std::cout <<"************************************************************************";
return 0;

}
