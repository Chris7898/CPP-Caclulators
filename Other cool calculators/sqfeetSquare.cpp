// To Do still... Sq ft of a square room calc

#include <iostream>
#include <cmath>

double result;
double Width;
double Length;


int main(){
    std::cout <<"Enter The Width: ";
    std::cin >> Width;

    std::cout <<"Enter The Length: ";
    std::cin >> Length;

    result = Width * Length;

    std::cout <<"Result: " << result << "Square Feet" << '\n';
}