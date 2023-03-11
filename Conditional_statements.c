#include<stdio.h>
int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if (age > 21)
    {
        printf("You are available for marriage!\n");
    }
    else
    {
        printf(" You are a child, so you can not available for marriage\n.");
    }
}