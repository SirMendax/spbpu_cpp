//
// Created by mendax on 28.11.2020.
//

#include <map>
#include "EquationService.h"
#include <cmath>


EquationService::EquationService(const Request &request) : request(request) {}

std::map<double, double> EquationService::calculateResult() {
    std::map <double, double> result;
    double x = this->request.getA();

    while(x <= this->request.getB()){
        if(this->request.getDelta() > 0){
            x+= this->request.getDelta();
        }else{
            x-= this->request.getDelta();
        }
        double left = leftFunction(x);
        double right = rightFunction(x);
        if(isnanl(left) || isnanl(right)){
            result[x] = NAN;
        }else{
            result[x] = min(left, right);
        }
    }

    return result;
}

double EquationService::leftFunction(double x) {
    double sub = (1-num)/(cos(x - num));
    return log(sub);
}

double EquationService::rightFunction(double x) {
    return tan(x)/num;
}

double EquationService::min(double x1, double x2){
    if(x1 > x2){
        return x1;
    }else{
        return x2;
    }
}
