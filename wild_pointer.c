#include<stdio.h>
int main()
{
    int a=334;
    int *ptr;//it is a wild pointer
    // *ptr=34;//this is not a good thing
    ptr=&a;//ptr is no longer a wild pointer
    printf("The value of a is %d\n",*ptr);
    return 0;
}
