#include <stdio.h>
int b = 34; // this is a global variable since it is decleared outside the main
int func1(int number)
{
    static int myvar = 0;
    printf("The value of myver is %d\n", myvar);
    myvar++;
    return number + myvar;
}

int main()
{
    int val = func1(b);
    // int *ptr = &val;
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b); 
    return 0;
}
