#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("my file.txt", "w");
    // ******** to see word by word ********
    char c = fgetc(ptr);
    printf("The character I read was %c\n", c );
    c = fgetc(ptr);
    printf("The character I read was %c\n", c );
    // ******** to see the whole word ********
    // char str[4];
    // fgets(str, 7, ptr);
    // printf("The string is %s\n", str);
    // fputc('o',ptr);
    // fputs("this is subham",ptr);
    // fclose(ptr);
    return 0;
}
