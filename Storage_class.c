#include <stdio.h>
int sum=344;//if we comment out this (int sum = func(3, 5)); and  auto int sum;)then in output we will get the global variable value
int func(int a , int b )
{
    auto int sum;
    sum = a+b;
    // extern int sum;
    return sum;
}
int main()
{
    int addition = func(3, 5);
    printf("The sum is %d", addition); 
    return 0;
}
