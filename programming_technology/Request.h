//
// Created by mendax on 28.11.2020.
//

#ifndef PROGRAMMING_TECHNOLOGY_REQUEST_H
#define PROGRAMMING_TECHNOLOGY_REQUEST_H

#include <iostream>
#include <string>
#include <limits>

class Request
{
private:
    double a, b, delta;
    void input(const std::string& message, double &value, bool notNullFlag);
    void stopInput(const std::string &message);
public:
    Request();
    Request(double a, double b, double delta);

    void setA();
    void setB();
    void setDelta();
    double getA();
    double getB();
    double getDelta();
};

#endif //PROGRAMMING_TECHNOLOGY_REQUEST_H
