#include <stdio.h>

void findMinMax(int arr[], int size, int *min, int *max) {
    if (size <= 0) {
        printf("Array is empty.\n");
        return;
    }

    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int arr[] = {9, 4, 2, 7, 5, 1, 8, 3, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    findMinMax(arr, size, &min, &max);

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}
