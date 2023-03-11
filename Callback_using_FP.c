// #include <stdio.h>
// int sum(int a, int b)
// {
//     return a + b;
// }
// void GreetHElloAndExeucate(int (*fptr)(int, int))
// {
//     printf("Hello USER\n");
//     printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
// }
// void GreetGMAndExeucate(int (*fptr)(int, int))
// {
//     printf("Good morning USER\n");
//     printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
// }
// int main()
// {
//     int (*ptr)(int, int);
//     ptr = sum;
//     GreetGMAndExeucate(ptr);
//     return 0;
// }

// Task given by harry bhai
#include <stdio.h>
float avg(float a, float b)
{
    return (a + b) / 2;
}
float greetgoodevening(float (*fptr)(float, float))
{
    printf("Hello Good Evening\n");
    printf("The avarage of 5 & 7 is %f\n", avg(5, 7));
}
float greetgoodafternoon(float (*fptr)(float,float))
{
    float a,b;
    printf("Hello Good Afternoon\n");
    printf("Enter the numbers you want the avarage of :\n");
    scanf("%f%f",&a,&b);
    printf("The avarage of given numbers is %f\n",avg(a,b));
    return avg(a,b);
}
int main()
{
    float (*ptr)(float, float);
    ptr = avg;
    greetgoodafternoon(ptr);
    greetgoodevening(ptr);
    return 0;
}
