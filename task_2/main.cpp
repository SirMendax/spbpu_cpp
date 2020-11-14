#include <iostream>
#include "converter.h"


int main()
{
    std::string number;
    int base, fBase;
    std::cin >> number >> base >> fBase;
    Converter converter(number, base, fBase);
    converter.convert();
    converter.printConvertedNumber();
    return 0;
}