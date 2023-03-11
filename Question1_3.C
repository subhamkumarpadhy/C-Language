// conversion from ccelcius to farhrenheit
#include<stdio.h>
int main()
{
float fahrenheit, celsius;
printf("Enter temperature celsius\n");
scanf("%f", &celsius);
fahrenheit =(celsius*9.0/5.0)+32;
printf("Temperature in fahrenheit is %f\n",fahrenheit);
return 0 ;
}
