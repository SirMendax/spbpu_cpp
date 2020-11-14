#include "converter.h"
#include <string>
#include <cmath>

void Converter::convert(){
    int lengthIntegerPart;
    double decimalNumber = 0;
    std::cout << number << std::endl;
    lengthIntegerPart = number.find('.');

    for(char & it : number) {
        if (it == '.')
        {
            continue;
        }
        else
        {
            decimalNumber += pow(startBase, (lengthIntegerPart - 1)) * (it - '0');
            lengthIntegerPart--;
        }
    }

    const std::string symbols = "0123456789abcdef";
    double fractionalPart, integerPart;
    int tmp;

    std::string finishIntegerNumber, finishFractionalNumber;
    fractionalPart = modf(decimalNumber, &integerPart);
    finishIntegerNumber = symbols[((int)integerPart)%finishBase];
    finishFractionalNumber = ".";
    tmp = ((int)integerPart/finishBase);

    while(tmp != 0){
        finishIntegerNumber += symbols[tmp%finishBase];
        tmp = tmp/finishBase;
    }
    reverseStr(finishIntegerNumber);

    double iTmp;
    int j = 0;

    while (j < 5)
    {
        fractionalPart *= finishBase;
        fractionalPart = modf(fractionalPart, &iTmp);
        finishFractionalNumber += symbols[static_cast<int>(iTmp)];
        j++;
    }

    convertedNumber = finishIntegerNumber + finishFractionalNumber;
}