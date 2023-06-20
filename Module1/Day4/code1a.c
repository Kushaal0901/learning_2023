#include <stdio.h>

int main() {
    int numbers[20];
    int n, i, sum = 0;
    float average;

    printf("Enter the number of elements (up to 20): ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    average = (float)sum / n;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
