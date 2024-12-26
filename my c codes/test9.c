// length
#include<stdio.h>
#include<string.h>


int main()
{
    char str[100] ;
    int length = 0;
    printf("enter the string: ");
    scanf("%s" , &str);
    length = strlen(str);
    printf("length of the string by built in fxn is %d\n" , length);
    
    // length = 0 ;

    // for(int i=0 ; str[i] != '\0' ; i++){
    //     length ++;
    // }
    
    printf("length of string by counting characters is %d" , length);
}