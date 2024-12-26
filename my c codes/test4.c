#include<stdio.h>
int main()
{
    int m,n,p;
    printf("Enter no. of rows and columns  of 1st and 2nd matrixx:\n");
    scanf("%d %d", &m, &n);

   int  m1[m][n] , m2[m][n] , m3[m][n] ;
   printf("Enter elements of the matrix 1:\n");
   for(int i = 0 ; i < m ; i++){
    for(int j = 0 ; j < n ; j++){
        scanf("%d", &m1[i][j]);
    }
   }

    printf("Enter elements of the matrix 2:\n");
   for(int i = 0 ; i < m ; i++){
    for(int j = 0 ; j < n ; j++){
        scanf("%d", &m2[i][j]);
    }
   }

   printf("Given matrices:\n");
   printf("M1:\n");
   for(int i = 0 ; i < m ; i++){
    for(int j = 0 ; j < n ; j++){
        printf("%d ", m1[i][j]);
    }printf("\n");
   }
   printf("\nM2:\n");
   for(int i = 0 ; i < m ; i++){
    for(int j = 0 ; j < n ; j++){
        printf("%d ", m2[i][j]);
    }printf("\n");
   }

   printf("Addition:\n");
   for(int i = 0 ; i < m ; i++){
    for(int j = 0 ; j < n ; j++){
        m3[i][j] = 0;
        printf("%d ", m3[i][j] = m1[i][j] + m2[i][j]);
    } printf("\n");
   }

    printf("Subtraction:\n");
   for(int i = 0 ; i < m ; i++){
    for(int j = 0 ; j < n ; j++){
        m3[i][j] = 0;
        printf(" %d ", m3[i][j] = m1[i][j] - m2[i][j]);
    } printf("\n");
   }
   if(m==n){
   printf("Multiplication:\n");
    for(int i = 0 ; i < m ; i++){
    for(int j = 0 ; j < n ; j++){
        m3[i][j] = 0;
        for(int k = 0 ;  k < n ; k++){
             m3[i][j] = m3[i][j] + m1[i][k]*m2[k][j] ;
        }
   }
 }
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            printf("%d ", m3[i][j]);
        }printf("\n");
    }  
}

 else
 printf("not multiplicable\n");

}
