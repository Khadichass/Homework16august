#include <stdio.h>

int main() {

    int numb;

    printf("Enter a number: ");
    scanf("%d", &numb);

    if (numb %2 == 0) {
        printf("%d is an even number.\n", numb);
    } else {
        printf("%d is an odd number.\n", numb);
    }

    return 0;
}
