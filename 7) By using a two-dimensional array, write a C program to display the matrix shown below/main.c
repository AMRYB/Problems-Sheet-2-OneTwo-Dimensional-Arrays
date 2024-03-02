#include <stdio.h>

int main() {
    int matrix[5][5];
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i < j) {
                matrix[i][j] = 1;
            } else if (i == j) {
                matrix[i][j] = 0;
            } else {
                matrix[i][j] = -1;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
