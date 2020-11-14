#include "quadraticEquation.h"
#include <cmath>

QuadraticEquation::QuadraticEquation(double paramA, double paramB, double paramC){
    A = paramA;
    B = paramB;
    C = paramC;
}

void::QuadraticEquation::calcDiscriminant(){
    D = B*B - 4*A*C;
}

void::QuadraticEquation::solve(){
    calcDiscriminant();
    if(D > 0){
        x1.real(((-B) + sqrt(D)) / (2 * A));
        x1.imag(0);
        x2.real(((-B) - sqrt(D)) / (2 * A));
        x2.imag();
    }else if(D == 0){
        x1.real(-(B / (2 * A)));
        x1.imag(0);
        x2.real(-(B / (2 * A)));
        x2.imag(0);
    }else{
        double u, v;
        u = B/(2*A);
        v = sqrt((-1)*D)/(2*A);
        x1.real(u);
        x1.imag(v);
        x2.real(u);
        x2.imag(-v);
    }
}