#include <stdio.h>

int main() {
    int matrix[2][2], rowSum[2] = {0}, colSum[2] = {0};

    printf("Enter 4 elements for 2x2 matrix:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }

    printf("Row sums: %d %d\n", rowSum[0], rowSum[1]);
    printf("Column sums: %d %d\n", colSum[0], colSum[1]);

    return 0;
}
