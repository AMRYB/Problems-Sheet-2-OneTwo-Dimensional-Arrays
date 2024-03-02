#include <stdio.h>

void findMinMaxAvg(int arr[], int size, int *max, int *min, double *avg);

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max, min;
    double avg;
    findMinMaxAvg(arr, n, &max, &min, &avg);

    printf("Maximum value in the array is: %d\n", max);
    printf("Minimum value in the array is: %d\n", min);
    printf("Average value of the array is: %.2f\n", avg);

    return 0;
}

void findMinMaxAvg(int arr[], int size, int *max, int *min, double *avg) {
    *max = arr[0];
    *min = arr[0];
    double sum = 0.0;

    for(int i = 0; i < size; i++) {
        if(arr[i] > *max) {
            *max = arr[i];
        }
        if(arr[i] < *min) {
            *min = arr[i];
        }
        sum += arr[i];
    }

    *avg = sum / size;
}
