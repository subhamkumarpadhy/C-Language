#include <stdio.h>
int main()
{
    int a[2][3],b[2][3], sum1 = 0, sum2 = 0;
    printf("Enter the elements of 1st matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("The 1st matrix is :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", a[i][j]);
            sum1 = sum1 + a[i][j];
        }
        printf("\n");
    }
    printf("The sum is %d.\n", sum1);
    printf("The 2nd matrix is :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", b[i][j]);
            sum2 = sum2 + b[i][j];
        }
        printf("\n");
    }
    printf("The sum is %d.\n", sum2);
    return 0;
}
