#include <iostream>

int main() {

    std::string a;
    std::string b;

    std::cin >> a;
    std::cin.ignore();
    std::cin >> b;
    std::cin.ignore();

    std::string ab = a+b;
    int aLength = a.length();
    int bLength = b.length();

    std::cout << aLength << " " << bLength << std::endl;
    std::cout << ab << std::endl;

    char aFirst = a[0];
    char bFirst = b[0];

    a[0] = bFirst;
    b[0] = aFirst;

    std::cout << a << " " << b << std::endl;

    return 0;
}

