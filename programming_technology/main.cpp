#include <iostream>
#include <map>
#include "Request.h"
#include "Response.h"
#include "EquationService.h"

int main() {
    auto * request = new Request();
    auto * service = new EquationService(*request);
    std::map<double, double> result = service->calculateResult();
    auto * response = new Response(result);
    return 0;
}