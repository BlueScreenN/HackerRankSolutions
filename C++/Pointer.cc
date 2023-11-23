#include <iostream>

void update(int *a, int *b);

int main() {

    int a;
    std::cout << "";
    std::cin >> a;

    int b;
    std::cout << "";
    std::cin >> b;

    update(&a, &b);
}


void update(int *a, int *b) {

    int sum = *a + *b;
    int diff = *a - *b;

    if(diff < 0) {
        diff *= -1;
    }

    *a = sum;
    *b = diff;
    std::cout << sum << "\n" << diff << std::endl;
}