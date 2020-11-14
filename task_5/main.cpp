#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    double x, xCopy, result = 0;
    int k, j = 0, p, t = 2;
    std::cout << "Введите x" << std::endl;
    std::cin >> x;
    std::cout << "Введите основание p" << std::endl;
    std::cin >> p;
    std::cout << "Введите точность k" << std::endl;
    std::cin >> k;

    while(true){
        if(x < p && x >= 1){
            break;
        }
        result++;
        x /= p;
    }

    std::vector<int> bArray;

    while(j <= k){
        j++;
        x *= x;
        if(x < p){
            bArray.push_back(0);
        }else{
            bArray.push_back(1);
            x /= p;
        }
    }

    std::cout << "Последовательнсоть bn:" << std::endl;
    for(int l = 0; l < bArray.size(); l++){
        std::cout << bArray[l] << " ";
        result += (double)bArray[l]/t;
        t *= 2;
    }
    std::cout << std::endl << "Результат вычисления: ";
    std::cout << std::setprecision(k) << std::fixed << result;
    return 0;
}
