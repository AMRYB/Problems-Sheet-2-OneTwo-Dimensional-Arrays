#include <stdio.h>
#define PI 3.14159

void calculateCircle(float radius, float *circumference, float *area) {
    *circumference = 2 * PI * radius;
    *area = PI * radius * radius;
}

int main() {
    float radius, circumference, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    calculateCircle(radius, &circumference, &area);

    printf("Circumference of the circle: %.2f\n", circumference);
    printf("Area of the circle: %.2f\n", area);

    return 0;
}
