// prize distribution in 3 ways only math pass, only science pass , both exams pass
#include <stdio.h>
int main()
{
int a;
#define science pass= 1 , math pass = 2, both the exam pass= 3;
printf("Enter 1 if you pass science exam\n");
printf("Enter 2 if you pass math exam\n");
printf("Enter 3 if you pass both science & math exam\n");
scanf("%d",&a);
if(a==3)
{
    printf("you won $45\n");
}
else if (a==1||a==2)
{
printf("you won $15\n");
}
else
{
    printf("SORRY!you did not win anything\n");
}
    return 0;
}
