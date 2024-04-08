#include "helper.h"
#include "bubblesort.h"

void BubbleSort(int* arr, int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
            if (Compare(arr[i], arr[j]) > 0)
                Swap(&arr[i], &arr[j]);
}
