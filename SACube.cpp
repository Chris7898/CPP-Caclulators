#include <iostream>
#include <cmath>

double result;
double num;

int main(){

    std::cout <<"Enter the Height/Length: ";
    std::cin >> num;

    result = 6 * pow(num,2);

    std::cout << "Result: " << result << '\n';

return 0;

}