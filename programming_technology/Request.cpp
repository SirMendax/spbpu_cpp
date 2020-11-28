//
// Created by mendax on 28.11.2020.
//

#include "Request.h"

void Request::input(const std::string &message, double &value, bool notNullFlag = false) {
    while (true) {
        std::cout << message << std::endl;
        if (std::cin >> value) {
            if(notNullFlag && value == 0){
                this->stopInput("Please enter a not null value");
            }else{
                break;
            }
        } else {
            this->stopInput("Please enter a valid type value (from the field of real numbers)");
        }
    }
}

void Request::stopInput(const std::string &message) {
    std::cout << message << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}


void Request::setA() {
    this->input("Please enter left value for interval", this->a);
}

void Request::setB() {
    this->input("Please enter right value for interval", this->b);
}

void Request::setDelta() {
    this->input("Please enter step for interval", this->delta, true);
}

double Request::getA() {
    return this->a;
}

double Request::getB() {
    return this->b;
}

double Request::getDelta() {
    return this->delta;
}

Request::Request() {
    this->setA();
    this->setB();
    this->setDelta();
}

Request::Request(double a, double b, double delta) {
    this->a = a;
    this->b = b;
    this->delta = delta;
}