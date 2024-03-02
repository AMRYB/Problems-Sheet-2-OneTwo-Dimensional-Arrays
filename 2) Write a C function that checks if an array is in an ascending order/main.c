#include <stdio.h>
#include <stdbool.h>

bool isArrayInAscendingOrder(int arr[], int size);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (isArrayInAscendingOrder(arr, size)) {
        printf("The array is in ascending order.\n");
    } else {
        printf("The array is not in ascending order.\n");
    }

    return 0;
}

bool isArrayInAscendingOrder(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}
