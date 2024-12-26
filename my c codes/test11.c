#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10], str2[10];
    int i, c = 0;
    printf("Enter elements of string1: ");
    scanf("%s", str1);
    printf("%s", str1);
    printf("\nEnter elements of string2: ");
    scanf("%s", str2);
    printf("%s\n", str2);
    int x = strcmp(str1 , str2);
   
    printf("%d" , x);
}