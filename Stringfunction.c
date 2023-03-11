#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "subham kumar ";
    char s2[] = "padhy";
    char s3[60];
    // printf("The strcmp for s1 , s2 returned %d", strcmp(s1,s2));//copmare only two strings
    // puts(strcat(s1,s2));//combine only two given strings 
    // printf("The lehth of the string s1 is %d\n",strlen(s1));//give the length of strings
    // printf("The lehth of the string s2 is %d\n",strlen(s2));
    // printf("The reverse of the s1 is :\n");
    // puts(strrev(s1));//reverse the string
    // printf("The reverse of the s2 is :\n");
    // puts(strrev(s2));
    strcpy(s3,strcat(s1,s2));//copy one string to another
    puts(s3);

    // quiz
    // char s1[60];
    // char s2[60];
    // char s3[100] = " is the friend of ";
    // printf("Enter first friend name \n");
    // gets(s1);
    // printf("Enter second friend name: \n");
    // gets(s2);
    // puts(strcat(s1, (strcat(s3, s2))));
    return 0;
}
