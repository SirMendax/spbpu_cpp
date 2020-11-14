#include <iostream>
#include "quadraticEquation.h"

int main()
{
    double a, b, c;
    std::cout << "Введите параметр A" << std::endl;
    std::cin >> a;
    std::cout << "Введите параметр B" << std::endl;
    std::cin >> b;
    std::cout << "Введите параметр C" << std::endl;
    std::cin >> c;
    std::cout << a << "x + " << b << "x + " << c << std::endl;

    QuadraticEquation quadraticEquation(a, b, c);
    quadraticEquation.solve();
    quadraticEquation.printSolve();

    return 0;
}
