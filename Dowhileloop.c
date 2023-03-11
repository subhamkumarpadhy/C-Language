#include <stdio.h>
int main()
{
    int u, t = 0;
    printf("Enter a number\n");
    scanf("%d", &u);
    do
    {
        printf("%d\n", t + 1);
        t = t + 1;
    } while (t < u);
    return 0;
}
