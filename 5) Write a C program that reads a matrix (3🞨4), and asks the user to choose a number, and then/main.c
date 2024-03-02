#include <stdio.h>

int main() {
    int matrix[3][4];
    int i, j, number, found = 0;

    printf("Enter the elements of a 3x4 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Enter a number to find in the matrix: ");
    scanf("%d", &number);

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            if(matrix[i][j] == number) {
                printf("Number found at position: (%d, %d)\n", i+1, j+1);
                found = 1;
                break;
            }
        }
        if(found) break;
    }

    if(!found) {
        printf("Number not found.\n");
    }

    return 0;
}
