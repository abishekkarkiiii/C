#include <stdio.h>

int power(int base, int exponent) {
    int result = 1;
    while (exponent != 0) {
        result *= base;
        exponent--;
    }
    return result;
}

int main() {
    int base, exponent;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);
    
    printf("%d raised to the power of %d is %d\n", base, exponent, power(base, exponent));
    return 0;
}

