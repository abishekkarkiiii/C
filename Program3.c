#include <stdio.h>


void swap(int *swapValue, int *nextValue) {
    int temp = *swapValue;
    *swapValue = *nextValue;
    *nextValue = temp;
}

int main() {
    int a,b;

    printf("Enter a wich  2 Number you want to swap");
    scanf("%d %d",&a,&b);
    swap(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}

