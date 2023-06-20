#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char inputString[] = "5,2,7,8";
    int integers[4];
    int i = 0;

    // Use strtok to tokenize the inputString based on commas
    char *token = strtok(inputString, ",");
    while (token != NULL) {
        // Convert the token to an integer and store it in the integers array
        integers[i++] = atoi(token);
        token = strtok(NULL, ",");
    }

    // Print the converted integers
    for (i = 0; i < 4; i++) {
        printf("Integer %d: %d\n", i+1, integers[i]);
    }

    return 0;
}
