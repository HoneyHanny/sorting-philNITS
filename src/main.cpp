#include <stdio.h>
#include <stdlib.h>

#include "bubblesort.h"
#include "selectionsort.h"
#include "insertionsort.h"
#include "helper.h"
// #include "quicksort.h"
// #include "mergesort.h""

void DisplayMenu() {
    printf("Choose a sorting algorithm\n");
    printf("[0] - Set array\n");
    printf("[1] - Bubble sort\n");
    printf("[2] - Selection sort\n");
    printf("[3] - Insertion  sort\n");
}

void SetArray(int* arr, int* n) {
    
    printf("Enter size of the array: ");
    scanf("%d", n);

    if (arr == NULL) {
        arr = (int*)malloc(sizeof(int) * (*n));
    } else {
        free(arr);
        arr = (int*)malloc(sizeof(int) * (*n));
    }

    for (int i = 0; i < *n; i++) {
        printf("Input index %d: ", i);
        scanf("%d", &arr[i]);
    }
}

int main() {

    int option, n, menu = 1;
    int* arr = NULL;

    SetArray(arr, &n);

    while (menu) {

        system("cls");
        DisplayMenu();

        scanf("%d", &option);

        switch (option) {
            case 0:
                SetArray(arr, &n);
                PrintArray(arr, n);
                break;
            case 1:
                printf(">>> bubble sorting\n");
                BubbleSort(arr, n);
                PrintArray(arr, n);
                break;

            case 2:
                SelectionSort(arr, n);
                PrintArray(arr, n);
                break;

            case 3:
                PrintArray(arr, n);
                break;

            case 4:
                PrintArray(arr, n);
                break;

            default:
                menu = 0;
                break;
        }
        printf("\n");
    }

    return 0;
}
