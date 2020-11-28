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
    QuadraticEquation(double A, double B, double C)
    : A(A), B(B), C(C)
    {

    };

    void calcDiscriminant();

    void solve();

    void printSolve() const{
        if(x1.imag() == 0 && x2.imag() == 0){
            std::cout << "x1 = " << x1.real() << "; x2 = " << x2.real();
        }else{
            std::cout << "x1 = " << x1 << "; x2 = " << x2;
        }
    }
};

#endif
