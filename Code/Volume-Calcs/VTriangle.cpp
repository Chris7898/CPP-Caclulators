#include <iostream>
#include "VCalcsconst.h"

int main(){
    std::cout <<"*********************Triangle Volume Calc*********************";
    std::cout <<"\nEnter The Base area: ";
    std::cin >> BaseArea;
    std::cout <<"Enter the Height";
    std::cin >> Height;

    Volume = BaseArea * Height;

    std::cout <<"Result: " << Volume << '\n';

system("pause");
}