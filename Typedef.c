#include <stdio.h>
#include <string.h>
typedef struct student
{
    int id;
    int marks;
    char fav_char;
    char name[50];
} std ;
int main()
{
    std s1, s2;
    s1.id = 56;
    s2.id = 89;
    printf("Value of s1's Id is %d\n", s1.id);
    printf("Value of s2's Id is %d\n", s2.id);

    // The below line means int * of a and int of b;
    // int* a,b;
    // typedef int *intpointer;
    // intpointer a, b;
    // int c = 99;
    // a = &c;
    // b = &c;
    // printf("The address of C is %d\n",a);
    return 0;
}
