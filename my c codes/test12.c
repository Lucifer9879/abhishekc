//maximum out of array
#include<stdio.h>
int main()
{
    int arr[10] ;
    printf("Enter elements in array ");
    for(int i = 0 ; i < 10 ; i++)
    {
        scanf("%d" , &arr[i]);
    }

    printf("the maximum element is\n");
    for(int i = 1 ; i < 10 ; i++)
    {
       if (arr[i] > arr[0]){
        arr[0] = arr[i];
       }
    }
    
    printf("%d" , arr[0]);
}