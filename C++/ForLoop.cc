#include <iostream>
#include <cstdio>
#include <string>
#include <map>

int main() {

    int a;
    int b;

    std::map<int, std::string> numberMap;

    numberMap[1] = "one";
    numberMap[2] = "two";
    numberMap[3] = "three";
    numberMap[4] = "four";
    numberMap[5] = "five";
    numberMap[6] = "six";
    numberMap[7] = "seven";
    numberMap[8] = "eight";
    numberMap[9] = "nine";

    std::cout << "";
    std::cin >> a;

    std::cout << "";
    std::cin >> b;

    if(a >= b){
        return 0;
    }

    for(int i = a; i <= b; i++) {
        if(i <= 9) {
            std::cout << numberMap[i] << std::endl;
        }
        else {
            if(i%2 == 0) {
                std::cout << "even" << std::endl;
            }
            else {
                std::cout << "odd" << std::endl;
            }
        }
    }

    return 0;
}