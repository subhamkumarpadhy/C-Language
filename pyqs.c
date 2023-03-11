// all possible value of 1,2,3
// #include <stdio.h>
// int main()
// {
//     int i, j, k;
//     for (i = 1; i <= 3; i++)
//     {
//         for (j = 1; j <= 3; j++)
//         {
//             for (k = 1; k <= 3; k++)
//             {
//                 if (i != j && j != k && k != i)
//                 {
//                     printf("%d %d %d\n", i, j, k);
//                 }
//             }
//         }
//     }
//     return 0;
// }

// power of a number
#include <stdio.h>
int main()
{
    int base, exponent;
    long long power = 1;
    int i;
    /* Input base and exponent from user */
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    /* Multiply base, exponent times*/
    for(i=1; i<=exponent; i++)
    {
        power = power * base;
    }
    printf("%d ^ %d = %lld", base, exponent, power);
    return 0;
}
