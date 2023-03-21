#include <iostream>
#include <cmath>

double a;
double b;
double c;
double d;
double result;

int main(){
    std::cout <<"\n***************Square Perimeter calc***************\n";

    std::cout <<"Enter side 1: ";
    std::cin >> a;

    std::cout <<"Enter side 2: ";
    std::cin >> b;

    std::cout <<"Enter side 3: ";
    std::cin >> c;

    std::cout <<"Enter side 4: ";
    std::cin >> d;

    result = a + b + c + d;

    std::cout <<"result:" << result;
    std::cout <<"\n******************************\n";

return 0;
}