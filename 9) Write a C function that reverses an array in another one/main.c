#include <stdio.h>

void reverseArray(int original[], int size, int reversed[]) {
    for (int i = 0; i < size; i++) {
        reversed[size - 1 - i] = original[i];
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int original[] = {1, 2, 3, 4, 5};
    int size = sizeof(original) / sizeof(original[0]);
    int reversed[size];

    reverseArray(original, size, reversed);

    printf("Original array: ");
    printArray(original, size);

    printf("Reversed array: ");
    printArray(reversed, size);

    return 0;
}
