// #include<stdio.h>
// int main()
// {
//     int arr[10] ;
//     printf("Enter the elements in the array ");
//     for(int i = 0 ; i < 10 ; i++)
//     {
//         scanf("%d" , &arr[i]);
//     }

//     for(int i = 1 ; i < 10 ; i++)
//     {
//         if(arr[0] < arr[i])
//         {
//             arr[0] = arr[i] ;
//         }
//     }

//     printf("Maximum element in the array is %d" , arr[0]);
// }

#include<stdio.h>
int main()
{
    int arr[10] , n , c = 0 , i ;
    printf("Enter the elements in the array ");
    for(int i = 0 ; i < 10 ; i++)
    {
        scanf("%d" , &arr[i]);
    }

    printf("Enter the number to find ");
    scanf("%d" , &n);

    for(i = 0 ; i < 10 ; i++)
   {
      if (n == arr[i])
      {
        c = 1 ;
        break;
      }
   }
   
   if(c)
   {
      printf("number found\nOf index %d" , i);
   }
   else
   printf("number not found");
}