#include <stdio.h>

int main() {
    int numbers[10];
    int max, min, sum = 0;
    float average;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    max = min = numbers[0];

    for (int i = 1; i < 10; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    average = (float)sum / 10;

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    printf("Average: %.2f\n", average);

    return 0;
}
