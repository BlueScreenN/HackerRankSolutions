#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a;
    int b;
    int c;

    cin >> a >> b >> c;

    if (a <= 1000 && b <= 1000 && c <= 1000 && a >= 1 && b >= 1 && c >= 1) {

        int output = a+b+c;
        printf("%d", output);

    }
    return 0;
}
