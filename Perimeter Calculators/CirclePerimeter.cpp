#include <iostream>
#include <cmath>

double radius;
double diameter;
double result;
const double pi = 3.14;
char op;

int main(){

    std::cout << "\n********************Circle Perimeter calc********************\n";
    
    std::cout << "please choose either radius or diameter\n";
    std::cout << "Use R for radius or D for diameter.\n";
    std::cout << "Enter R or D: ";
    std::cin >> op;

switch (op)
{
case 'R':
    std::cout <<"Enter your Radius: ";
    std::cin >> radius;
    result = 2 * pi * radius;
    std::cout <<"result: " << result;

    break;

case 'D':
    std::cout <<"Enter your Diameter: ";
    std::cin >> radius;
    result = pi * diameter;
    std::cout <<"Result: " << result;

    break;

default:
std::cout <<"Invlaid!";

    break;

}


return 0;
}
