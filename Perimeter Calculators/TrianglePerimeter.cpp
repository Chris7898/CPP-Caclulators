#include <iostream>
#include <cmath>

double a;
double b;
double c;
double result;

int main(){
    std::cout <<"Enter side a: ";
    std::cin >> a;

    std::cout <<"Enter side b: ";
    std::cin >> b;

    std::cout <<"Enter side c: ";
    std::cin >> c;

    result = a + b + c;
    std::cout << "result: " << result << '\n';

return 0;
}