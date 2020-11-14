#pragma once

#ifndef TASK_1_QUADRATICEQUATION_H

#define TASK_1_QUADRATICEQUATION_H

#include <iostream>
#include <string>
#include <complex>

class QuadraticEquation
{
private:
    double A, B, C, D = 0;
    std::complex<double> x1, x2;
public:
    QuadraticEquation(double paramA, double paramB, double paramC);
    void calcDiscriminant();
    void solve();
    void printSolve() const{
        std::cout << "x1 = " << x1 << "; x2 = " << x2;
    }
};

#endif
