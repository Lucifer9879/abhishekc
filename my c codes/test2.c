#include <stdio.h>

int main() {
    char charArray[10];
    char *charPtr = charArray; // Assign the base address of the array to the pointer

    // Read elements into the character array
    printf("Enter 10 characters: ");
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &charArray[i]);
    }

    // Print the elements of the character array using the pointer
    printf("The elements of the character array are: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", *(charPtr + i));

    }


    return 0;
}
