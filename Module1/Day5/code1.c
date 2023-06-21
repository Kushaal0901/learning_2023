#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double calculateVolume(struct Box* boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}

double calculateSurfaceArea(struct Box* boxPtr) {
    return 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height);
}

int main() {
    struct Box box;
    struct Box* boxPtr;

    box.length = 8.0;
    box.width = 4.0;
    box.height = 5.0;

    boxPtr = &box;

    printf("Volume: %.2f\n", calculateVolume(boxPtr));
    printf("Surface Area: %.2f\n", calculateSurfaceArea(boxPtr));

    return 0;
}
