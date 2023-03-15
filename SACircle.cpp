#include <iostream>
#include <cmath>

const double pi = 3.14;
double radius;
double result;

int main(){

    std::cout <<"Enter the radius: ";
    std::cin >> radius;

    result = pi * radius * radius;
    std::cout << "result: " << result << '\n';

  return 0;
}