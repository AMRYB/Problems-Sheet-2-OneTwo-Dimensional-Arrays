#include <stdio.h>

int isSparse(int rows, int cols, int matrix[rows][cols]) {
    int zeroCount = 0;
    int totalCount = rows * cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    return zeroCount > totalCount / 2;
}

int main() {
    int matrix[4][5] = {
        {0, 0, 3, 0, 4},
        {0, 0, 0, 0, 2},
        {0, 0, 0, 0, 0},
        {0, 2, 6, 0, 0}
    };

    if (isSparse(4, 5, matrix)) {
        printf("The matrix is sparse.\n");
    } else {
        printf("The matrix is not sparse.\n");
    }

    return 0;
}
