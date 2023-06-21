#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
};

void swapFields(struct Student* student1Ptr, struct Student* student2Ptr) {
    struct Student temp;

    // Swap the name fields
    strcpy(temp.name, student1Ptr->name);
    strcpy(student1Ptr->name, student2Ptr->name);
    strcpy(student2Ptr->name, temp.name);

    // Swap the rollNumber fields
    temp.rollNumber = student1Ptr->rollNumber;
    student1Ptr->rollNumber = student2Ptr->rollNumber;
    student2Ptr->rollNumber = temp.rollNumber;
}

int main() {
    struct Student student1, student2;

    printf("Enter the details of Student 1:\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Roll Number: ");
    scanf("%d", &(student1.rollNumber));

    printf("\nEnter the details of Student 2:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Roll Number: ");
    scanf("%d", &(student2.rollNumber));

    printf("\nBefore swapping:\n");
    printf("Student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("\nStudent 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Roll Number: %d\n", student2.rollNumber);

    // Swap the fields using the swapFields function
    swapFields(&student1, &student2);

    printf("\nAfter swapping:\n");
    printf("Student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("\nStudent 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Roll Number: %d\n", student2.rollNumber);

    return 0;
}
