#include <stdio.h>
int main()
{
    int i, a, t;
    printf("Enter the number you want the multiplication table of \n");
    scanf("%d", &a);
    for (i = 1; i <= 10; i++)
    {
        t = (a * i);
        printf("%d * %d = %d\n", a, i, t);
    }
    return 0;
}
