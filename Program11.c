#include <stdio.h>

int isPalindrome(int number) {
    int original = number, reversed = 0, remainder;
    
    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }
    
    return original == reversed;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (isPalindrome(number))
        printf("%d is a palindrome.\n", number);
    else
        printf("%d is not a palindrome.\n", number);
    
    return 0;
}

