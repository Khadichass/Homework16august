#include <stdio.h>
#define PI 3.14159

int main() {

    int radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of the circle: %d\n", area);
    
    printf("Circumference of the circle: %d\n", circumference);

    return 0;
}
