

    #include<stdio.h>
    void swap(int *a, int *b){
        int t;
        t = *a ;
        *a = *b ;
        *b = t ;
    }
    int main()
    {
        int a , b;

        printf("enter two numbers to be swapped\n");
        scanf("%d %d", &a , &b);
        printf("Before swapping\n");
        printf("first number %d\nsecond number %d\n" , a ,b);
        swap(&a , &b);
        printf("After swapping\n");
        printf("first number %d\nsecond number %d\n" , a ,b);
    }
