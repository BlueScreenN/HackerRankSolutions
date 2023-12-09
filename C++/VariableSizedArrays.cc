#include <iostream>
#include <sstream>
#include <vector>
#include <string>

int main() {
    int n, q;
    std::cin >> n >> q;
    std::vector<std::vector<int>> myVector;

    for(int i = 0; i <= n; i++) {

        std::string line;
        std::getline(std::cin, line);
        std::istringstream iss(line);

        std::vector<int> innerVector;

        int number;

        while (iss >> number) {
            innerVector.push_back(number);
        }
        myVector.push_back(innerVector);
    }
    std::cout << myVector[1][2] << std::endl;
    return 0;
}na

