// armstrong numbers
#include<stdio.h>
#include<math.h>
int main()
{
    int end , digits;
    printf("enter the end number ");
    scanf("%d" , &end);
    printf("Armstrong numbers 1 to %d are:\n" , end);
    for(int i = 1 ; i <= end ; i++)
    {   
       int x=i ;
       digits = 0;
        while(x>0){
            x=x/10;
            digits++;
        }

        int arm , y = i , sum = 0;
        while(y>0){
        arm=y%10;
        sum = sum + pow(arm , digits);
        y=y/10;
        }

      if(sum==i)
      printf("%d " , i);
    }
 
}