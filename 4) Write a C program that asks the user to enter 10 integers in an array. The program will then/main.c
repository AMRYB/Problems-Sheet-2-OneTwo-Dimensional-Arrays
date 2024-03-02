#include <stdio.h>

int main() {
    int numbers[10];
    int i;
    int increasing = 1, decreasing = 1, notChanging = 1;

    printf("Please enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    for(i = 0; i < 9; i++) {
        if(numbers[i] < numbers[i + 1]) {
            decreasing = 0;
            notChanging = 0;
        }
        else if(numbers[i] > numbers[i + 1]) {
            increasing = 0;
            notChanging = 0;
        }
        else {
            increasing = 0;
            decreasing = 0;
        }
    }

    if(notChanging)
        printf("the numbers in the array are not changing\n");
    else if(increasing)
        printf("the numbers in the array are increasing\n");
    else if(decreasing)
        printf("the numbers in the array are decreasing\n");
    else
        printf("the numbers in the array are increasing and then decreasing\n");

    return 0;
}
