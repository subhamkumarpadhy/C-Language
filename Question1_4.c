// calculating simple interest 
#include<stdio.h>
int main(){
    float I,p,r,t;
    printf("Enter number p\n");
    scanf("%f",&p);
    printf("Enter number r\n");
    scanf("%f",&r);
    printf("Enter number t\n");
    scanf("%f",&t);
    I = ((p * r * t)/100);
    printf("%f", I);
}
