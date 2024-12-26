#include<stdio.h>

struct student
{
    int roll ;
    float cgpa ;
    char name[100] ;
} ;

void printinfo( struct student stu )
{

    printf("%s , %d , %.2f \n" , stu.name , stu.roll , stu.cgpa);
}

int main()
{
   struct student stu[5] ;

   printf("enter name , roll no , CGPA of student 1\n");
   scanf("%s %d %f" , stu[0].name , &stu[0].roll , &stu[0].cgpa);
   
   printf("enter name , roll no , CGPA of student 2\n");
   scanf("%s %d %f" , stu[1].name , &stu[1].roll , &stu[1].cgpa);
  
   printf("enter name , roll no , CGPA of student 3\n");
   scanf("%s %d %f" , stu[2].name , &stu[2].roll , &stu[2].cgpa);
   
   printf("enter name , roll no , CGPA of student 4\n");
   scanf("%s %d %f" , stu[3].name , &stu[3].roll , &stu[3].cgpa);
   
   printf("enter name , roll no , CGPA of student 5\n");
   scanf("%s %d %f" , stu[4].name , &stu[4].roll , &stu[4].cgpa);

   printf("info of the students are\n\n");

   printinfo(stu[0]);
   printinfo(stu[1]);
   printinfo(stu[2]);
   printinfo(stu[3]);
   printinfo(stu[4]);
}