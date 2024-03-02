#include <stdio.h>

int main() {
    int numbers[10];
    int sumOdd = 0;
    int sumEven = 0;
    int i;

    printf("Enter 10 integers:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        if(numbers[i] % 2 == 0) {
            sumEven += numbers[i];
        } else {
            sumOdd += numbers[i];
        }
    }

    printf("Sum of even numbers: %d\n", sumEven);
    printf("Sum of odd numbers: %d\n", sumOdd);

    return 0;
}
