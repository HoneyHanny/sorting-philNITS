#include <stdio.h>

#include "helper.h"

// If this returns -1 a is greater
// If this returns 0 equals
// If this reutrns 1 b is greater
int Compare(int a, int b) {
    if (a > b) {
        return -1;
    } else if (a == b) {
        return 0;
    } else {
        return 1;
    }
}

void Swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void PrintArray(int* arr, int n) {
    printf("[ ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) {
            printf(",");
        }
        printf(" ");
    }
    printf("]\n");
}
