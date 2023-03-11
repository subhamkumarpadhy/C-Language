#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, i = 0;
    int *i2;
    while (i < 45545)
    {
        printf("Welcome to code with harry\n");
        i2 = malloc(34444*sizeof(int));
        if (i%100==0)
        {
            getchar();
        }
        i++;
        free(i2);//without this we will encounter a memory leak
    }
    return 0;
}
