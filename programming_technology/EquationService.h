//
// Created by mendax on 28.11.2020.
//

#ifndef PROGRAMMING_TECHNOLOGY_EQUATIONSERVICE_H
#define PROGRAMMING_TECHNOLOGY_EQUATIONSERVICE_H

#include <vector>
#include "Request.h"

class EquationService
{
private:
    static const int num = 15;
    Request request;
public:
    EquationService(const Request &request);
    std::map<double, double> calculateResult();
    static double leftFunction(double x);
    static double rightFunction(double x);
    static double min(double x1, double x2);
};

#endif //PROGRAMMING_TECHNOLOGY_EQUATIONSERVICE_H
