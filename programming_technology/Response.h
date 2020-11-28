//
// Created by mendax on 28.11.2020.
//

#ifndef PROGRAMMING_TECHNOLOGY_RESPONSE_H
#define PROGRAMMING_TECHNOLOGY_RESPONSE_H

#include <map>

class Response{
private:
    std::map<double, double> data;
public:
    Response(const std::map<double, double> &data);
};

#endif //PROGRAMMING_TECHNOLOGY_RESPONSE_H
