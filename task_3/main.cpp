#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

int factorial(int number);
double calculateSin(double x);

int main() {
    double h, x1, x2, a;
    std::string pathForOutputFile = "/home/mendax/Документы/education/spbpu/task_3/results.txt";
    std::cout << "Введите x1" << std::endl;
    std::cin >> x1;

    std::cout << "Введите x2" << std::endl;
    std::cin >> x2;

    std::cout << "Введите шаг h" << std::endl;
    std::cin >> h;

    std::cout << "Введите параметр a" << std::endl;
    std::cin >> a;

    std::ofstream outputFile;
    outputFile.open(pathForOutputFile, std::ios::app | std::ios::out);
    outputFile << "Старт" << std::endl;
    for(double i = x1; i <= x2; i += h){
        double result = a*calculateSin(1/i);
        if(isnanf(result)){
            outputFile << "x = " << i << "\t" << "y = NaN" << std::endl;
        }else{
            outputFile << "x = " << i << "\t" << "y = " << result << std::endl;
        }
    }
    outputFile.close();

    return 0;
}

double calculateSin(double x)
{
    double result = 0;

    for(int i = 25; i >= 1; i -= 2) {
        result += (((i - 1) % 4 == 0) ? 1 : -1 ) * pow(x, i) / factorial(i);
    }

    return result;
}

int factorial(int number)
{
    int res = 1;
    for (int i = 1; i <= number; i++)
    {
        res *= i;
    }
    return res;
}