// This file finds the Surface Area of a Square Pyramid.

#include <iostream>
#include <cmath>

double result;
double BaseEdge;
double Height;
double Slant;
double BasePerimeter;


int main(){
    std::cout <<"ENTER ALL IN CM!\n";

    // std::cout <<"Enter the base edge: ";
    // std::cin >> BaseEdge;

    // std::cout <<"Enter the Height: ";
    // std::cin >> Height;

    std::cout <<"Enter the Base Perimeter: ";
    std::cin >> BasePerimeter;

    std::cout <<"Enter the Slant in Degrees: ";
    std::cin >> Slant;

    result = BasePerimeter * Slant / 2;
    std::cout << "result: " << result << '\n';

    


    return 0;
}