#include <stdio.h>
#include <math.h>

int main() {
    int end = 500;
    printf("Armstrong numbers between 1 and %d are:\n", end);

    for (int i = 1; i <= end; i++) {
        int x = i, digits = 0, sum = 0;

        // Count the number of digits
        while (x > 0) {
            x = x / 10;
            digits++;
        }

        int y = i;
        // Calculate the Armstrong sum
        while (y > 0) {
            int arm = y % 10;
            sum += pow(arm, digits);
            y = y / 10;
        }

        // Check if sum is equal to the number
        if (sum == i) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
