#include <stdio.h>

void calculateAverageGrades(int numberOfStudents) {
    float grades[5];
    float sum, average;

    for (int i = 0; i < numberOfStudents; i++) {
        sum = 0;
        for (int j = 0; j < 5; j++) {
            scanf("%f", &grades[j]);
            sum += grades[j];
        }

        average = sum / 5;
        printf("%.2f\n", average);
    }
}

int main() {
    int numberOfStudents;

    scanf("%d", &numberOfStudents);
    calculateAverageGrades(numberOfStudents);

    return 0;
}
