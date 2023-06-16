#include <stdio.h>

int findBiggest(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2, largest;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    largest = findBiggest(num1, num2);

    printf("The largest number is: %d\n", largest);

    return 0;
}
