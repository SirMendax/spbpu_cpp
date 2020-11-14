#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>

unsigned int binaryGCD(unsigned int a, unsigned int b);
void setSieveOfEratosthenes(long n, const std::string& outputFilePath);


int main() {
    std::string inputFilePath = "/home/mendax/Документы/education/spbpu/task_4/inputFile.txt";
    std::string outputFilePath = "/home/mendax/Документы/education/spbpu/task_4/outputFile.txt";
    std::vector<int> inputVector;
    int n;

    std::ifstream inputFile(inputFilePath);

    while (!inputFile.eof())
    {
        inputFile >> n;
        inputVector.push_back(n);
    }
    inputFile.close();

    int nod = inputVector[0], maxNumber = inputVector[0], maxNumberHalf, nearestMaxNumberHalf, minDelta;
    nod = binaryGCD(inputVector[0], inputVector[1]);
    std::cout << nod << std::endl;

    for(auto i = 2; i < inputVector.size() && nod != 1; i++){
        nod = binaryGCD(nod, inputVector[i]);
        if(inputVector[i] > maxNumber) maxNumber = inputVector[i];
    }

    std::cout << "НОД = " << nod << std::endl;

    maxNumberHalf = maxNumber/2;
    minDelta = abs(inputVector[0]-maxNumberHalf);

    for(int element : inputVector){
        int delta = abs(element-maxNumberHalf);
        if(minDelta > delta){
            minDelta = delta;
            nearestMaxNumberHalf = element;
        }
    }

    long nod2 = binaryGCD(nearestMaxNumberHalf, maxNumber);
    std::cout << "НОД = " << nod2 << std::endl;
    std::cout << "НОК = " << nearestMaxNumberHalf*maxNumber/nod2 << std::endl;
    setSieveOfEratosthenes(maxNumber, outputFilePath);

    return 0;
}

void setSieveOfEratosthenes(long n, const std::string& outputFilePath)
{
    std::vector<bool> booleanArray(n, true);
    for(int i = 2; i * i <= n; ++i) {
        if(booleanArray[i]) {
            for(int j = i * i; j < n; j += i) {
                booleanArray[j] = false;
            }
        }
    }
    std::ofstream outputFile;
    outputFile.open(outputFilePath, std::ios::app | std::ios::out);
    outputFile << "Решето Эратосфена для " << n << std::endl;
    for(int i = 2; i < n; ++i) {
        if(booleanArray[i]) {
            outputFile << i << std::endl;
        }
    }
    outputFile.close();
}

unsigned int binaryGCD(unsigned int a, unsigned int b)
{
    unsigned int shift;

    if (!a) return b;

    if (!b) return a;

    for (shift = 0; !((a | b) & 1); ++shift) {
        a >>= 1;
        b >>= 1;
    }

    while (!(a & 1)){
        a >>= 1;
    }

    do {
        while (!(b & 1)){
            b >>= 1;
        }

        if (a < b){
            b -= a;
        }

        else{
            b = a - b;
            a -= b;
        }

        b >>= 1;

    } while (b);

    return a << shift;
}