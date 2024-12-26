#include <stdio.h>
void readArray(int arr[])
{
    printf("Enter 10 elements for the array:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
}
void printArray(int arr[])
{
    printf("Entered Array is:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[10];
    readArray(arr);
    printArray(arr);
}