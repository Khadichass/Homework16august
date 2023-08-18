#include <stdio.h>

int main() {

    int num1, num2, swp;

    printf("Enter the first value: ");
    scanf("%d", &num1);

    printf("Enter the second value: ");
    scanf("%d", &num2);

    swp = num1;
    num1 = num2;
    num2 = swp;

    printf("After swapping, the values are: %d and %d\n", num1, num2);

    return 0;
}
