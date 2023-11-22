#include <iostream>
#include <map>
#include <string>

int main() {
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

    int userInput;
    std::cout << "";
    std::cin >> userInput;

    if (userInput <= 9 && userInput >= 1) {
        std::string printValue = numberMap[userInput];
        std::cout << printValue << std::endl;
    }
    else {
        std::cout << "Greater than 9" << std::endl;
    }
}
