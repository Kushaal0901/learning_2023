#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

void getTimeDifference(struct Time* startTimePtr, struct Time* endTimePtr, struct Time* differencePtr) {
    int startTimeInSeconds = startTimePtr->hours * 3600 + startTimePtr->minutes * 60 + startTimePtr->seconds;
    int endTimeInSeconds = endTimePtr->hours * 3600 + endTimePtr->minutes * 60 + endTimePtr->seconds;
    int differenceInSeconds = endTimeInSeconds - startTimeInSeconds;

    differencePtr->hours = differenceInSeconds / 3600;
    differencePtr->minutes = (differenceInSeconds % 3600) / 60;
    differencePtr->seconds = differenceInSeconds % 60;
}

int main() {
    struct Time startTime, endTime, difference;

    printf("Enter the start time:\n");
    printf("Hours: ");
    scanf("%d", &(startTime.hours));
    printf("Minutes: ");
    scanf("%d", &(startTime.minutes));
    printf("Seconds: ");
    scanf("%d", &(startTime.seconds));

    printf("\nEnter the end time:\n");
    printf("Hours: ");
    scanf("%d", &(endTime.hours));
    printf("Minutes: ");
    scanf("%d", &(endTime.minutes));
    printf("Seconds: ");
    scanf("%d", &(endTime.seconds));

    getTimeDifference(&startTime, &endTime, &difference);

    printf("\nTime difference: %d hours, %d minutes, %d seconds\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}

