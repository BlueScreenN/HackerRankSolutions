#include <cstdio>
using namespace std;

int main() {
    int intNumber;
    long longNumber;
    char charVar;
    float floatNumber;
    double doubleNumber;
    scanf("%d %ld %c %f %lf", &intNumber, &longNumber, &charVar, &floatNumber, &doubleNumber);

    printf("%d\n%ld\n%c\n%f\n%lf", intNumber, longNumber, charVar, floatNumber, doubleNumber);

    return 0;
}