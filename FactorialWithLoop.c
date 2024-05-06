#include <stdio.h>

int main() {
    int arr[] = {4, 9, 5, 3, 2, 10};
    int i, j, t;

    for (i = 0; i < 6; i++) {
        for (j = i + 1; j < 6; j++) {
            if (arr[i] > arr[j]) {
                t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
        }
    }

    for (i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

