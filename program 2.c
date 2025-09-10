#include<stdio.h>

int main() {
    int minutes;
    int hours;
    int remainingMinutes;
    printf("Enter minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;
    remainingMinutes = minutes % 60;
    printf("%d minutes = %d hours and %d minutes\n", minutes, hours, remainingMinutes);

    return 0;
}