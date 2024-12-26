#include<stdio.h>

void frequency(long long num , int freq[]){
   for(int i = 0 ; i < 10 ; i++)
   {
      freq[i] = 0 ;
   }

   while(num != 0)
   {
      int digit = num % 10 ;
      freq[digit]++ ;
      num = num/10 ;
   }
}
int main()
{
    long long num ;
    int freq[10];

    printf("Enter number ");
    scanf("%lld" , &num);

    frequency(num , freq) ;

    printf("Frequency of number %lld are\n" , num);
    for(int i = 0 ; i < 10 ; i++)
    {
        if (freq[i] > 0)
        {
            printf("digit %d : %d times\n" , i , freq[i]);
        }
    }

}