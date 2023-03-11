#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
void greet(char* c)
{
    printf("Hello user good morning\n");
}
int main()
{
    printf("The sum of 1 & 2 is %d\n", sum(1, 2));//To test the function
    int (*fptr)(int, int);//Declearing a function pointer
    fptr = &sum;//creating a function pointer
    // fptr = &greet;//it will show garbage of d as 'greet' is a 'char' and 'd' is an 'int'
    int d=(*fptr)(4,6);//Deferenceing a function pointer
    printf("The value of d is %d\n",d);
    return 0;
}
