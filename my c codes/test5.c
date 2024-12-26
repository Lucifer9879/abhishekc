#include <stdio.h>

int main() {
    int m, n, p;
    printf("Enter number of rows and columns for the matrices:\n");
    scanf("%d %d", &m, &n);

    int m1[m][n], m2[m][n], sum[m][n], diff[m][n];
    printf("Enter elements of matrix 1:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter elements of matrix 2:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    printf("Matrix 1:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", m2[i][j]);
        }
        printf("\n");
    }

    // Addition
    printf("\nAddition:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            sum[i][j] = m1[i][j] + m2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // Subtraction
    printf("\nSubtraction:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            diff[i][j] = m1[i][j] - m2[i][j];
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    // Multiplication
    if (m == n) {
        int prod[m][n];
        printf("\nMultiplication:\n");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                prod[i][j] = 0;
                for (int k = 0; k < n; k++) {
                    prod[i][j] += m1[i][k] * m2[k][j];
                }
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", prod[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Not multiplicable\n");
    }

    return 0;
}

