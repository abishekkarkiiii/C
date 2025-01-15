#include <stdio.h>

int asciiValue(char ch) {
    int result = 0, shift = 0;
    while (ch) {
        result |= (ch & 1) << shift;
        ch >>= 1;
        shift++;
    }
    return result;
}

int main() {
    char input;
    printf("Enter a character: ");
    scanf("%c", &input);
    printf("ASCII value of '%c' is %d\n", input, asciiValue(input));
    return 0;
}

