#include <stdio.h>

void printHelloWorld() {
    printf("Hello, World!\n");
}

void addTwoNumbers() {
    int num1, num2, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("Sum: %d\n", sum);
}

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

void checkPrime() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
}

void fibonacci(int n) {
    int a = 0, b = 1, c;
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            c = i;
        } else {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d ", c);
    }
    printf("\n");
}

void generateFibonacci() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibonacci(n);
}

int main() {
    int choice;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Print Hello World\n");
        printf("2. Add Two Numbers\n");
        printf("3. Check if a Number is Prime\n");
        printf("4. Generate Fibonacci Sequence\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printHelloWorld();
                break;
            case 2:
                addTwoNumbers();
                break;
            case 3:
                checkPrime();
                break;
            case 4:
                generateFibonacci();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
