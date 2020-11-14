#ifndef TASK_2_CONVERTER_H
#define TASK_2_CONVERTER_H

#include <string>
#include <iostream>

class Converter
{
private:
    std::string number, convertedNumber;
    int startBase, finishBase;
    static void reverseStr(std::string& str)
    {
        int n = str.length();
        for (int i = 0; i < n / 2; i++)
            std::swap(str[i], str[n - i - 1]);
    }
public:
    Converter(std::string numberParam, int startBaseParam, int finishBaseParam){
        number = numberParam;
        startBase = startBaseParam;
        finishBase = finishBaseParam;
    }
    void convert();
    std::string getConvertedNumber(){
        return convertedNumber;
    }
    void printConvertedNumber(){
        std::cout << convertedNumber << std::endl;
    }
};

#endif //TASK_2_CONVERTER_H
