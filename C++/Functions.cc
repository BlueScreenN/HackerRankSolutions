#include <iostream>

int bigger(int a, int b, int c, int d);

int main() {
    int a, b, c, d;

    std::cout << "";
    std::cin >> a;

    std::cout << "";
    std::cin >> b;

    std::cout << "";
    std::cin >> c;

    std::cout << "";
    std::cin >> d;

    int bigNumber = bigger(a, b, c, d);

    std::cout << bigNumber << std::endl;
    return 0;
}

int bigger(int a, int b, int c, int d) {
    int biggerArray[4] = {a, b, c, d};
    int bigNumber = biggerArray[0];

    for(int i = 1; i < 4; ++i) {
        if(bigNumber < biggerArray[i]) {
            bigNumber = biggerArray[i];
        }
    }
    return bigNumber;
}
