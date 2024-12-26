#include<stdio.h>

// void printhw(int count){
//     if (count == 0)
//     return;

//     printf("hello world\n");
//     printhw(count - 1);
// }

// int sum(int n)
// {
//     if (n==1)
//     return 1;
//     else
//     return n + sum(n-1);
// }

int fact(int n)
{
    if (n == 1 || n==0){
        return 1;
    }
    else 
    return n * fact(n-1);
    }

int main()
{
    int f;
   f = fact(4);
   printf("factorial = %d" , f);

}