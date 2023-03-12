// This file find the surface area of a sphere.

#include <iostream>
#include <cmath>

int main(){

std::cout <<"\n****************Surface area of a sphere calculator****************\n";

double radius;
double Pi;
double result;
// 4 pi r squared

std::cout <<"\nwhat is the radius of your sphere?\n";
std::cout <<"Enter the radius: ";
std::cin >> radius;

result = 4 * 3.14 * radius * radius;

 std::cout << "result: " << result << '\n';

return 0;

}
