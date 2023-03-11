#include <stdio.h>
int printstr(char str[])
{
    int i;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    return 0;
}
int main()
{
    // char str[]={'S','U','B','H','A','M','\0'};
    // char str[] = "SUBHAM";
    char str[35];
    printf("Enter the string\n");
    gets(str);
    printf("using printf: %s\n",str);
    printf("using puts: ");
    puts(str);
    printf("using custom function printstr\n");
    printstr(str);
    return 0;
}
