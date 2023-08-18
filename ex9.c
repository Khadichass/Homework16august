#include <stdio.h>

int main() {
    int totalMin, hours, minute;


    printf("Enter the number of minutes: ");
    scanf("%d", &totalMin);

    hours = totalMin / 60;
    minute = totalMin % 60;

    printf("%d minutes is equal to %d hours and %d minutes.\n", totalMinutes, hours, minutes);

    return 0;
}
