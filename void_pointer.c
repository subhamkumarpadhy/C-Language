#include <stdio.h>
int main()
{
    int a = 334;
    float b = 8.3;
    void *ptr;
    ptr = &b;
    printf("The value of b is %f\n",*((float *)ptr));
    ptr = &a;
    printf("The value of b is %d\n",*((int *)ptr));
    return 0;
}
