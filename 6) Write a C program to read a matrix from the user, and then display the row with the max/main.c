#include <stdio.h>

int main() {
    int rows, cols, i, j, sum, maxSum = 0, maxRow = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < rows; i++) {
        sum = 0;
        for(j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        if(sum > maxSum) {
            maxSum = sum;
            maxRow = i;
        }
    }

    printf("Row with the maximum sum is Row %d with a sum of %d\n", maxRow + 1, maxSum);

    return 0;
}
