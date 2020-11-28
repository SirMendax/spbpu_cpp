//
// Created by mendax on 28.11.2020.
//

#include "Response.h"
#include <map>
#include <iostream>
#include <cmath>
#include <iomanip>


Response::Response(const std::map<double, double> &data) : data(data) {

    std::cout << "X" << "\t\t\t" <<  std::setw(15) << "Y" << std::endl;
    auto it = data.begin();
    for (int i = 0; it != data.end(); it++, i++) {
        std::cout << std::fixed << std::setprecision(0)
        << it->first
        << "\t\t\t";

        if(isnanl(it->second)){
            std::cout << std::setw(15) << "error" << std::endl;
        }else{
            std::cout << std::setw(15) << std::fixed << std::setprecision(3) << it->second << std::endl;
        }
    }

}
