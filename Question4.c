// // printing star pattern using loops
// #include <stdio.h>
// int main()
// {
//     int n, input, i, j;
//     char star = '*';
//     printf("Enter 0 for triangular star pattren\nEnter 1 for reverse triangular star pattren\n");
//     scanf("%d", &input);
//     if (input == 0)
//     {
//         printf("Enter the number of rows\n");
//         scanf("%d", &n);
//         printf("Printing triangular star pattern\n");
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j <= i; j++)
//             {
//                 printf("*");
//             }
//             printf("\n");
//         }
//     }
//     else if (input == 1)
//     {
//         printf("Enter the number of rows\n");
//         scanf("%d", &n);
//         printf("Printing reverse triangular star pattern\n");
//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = i; j <= n; j++)
//             {
//                 printf("*");
//             }
//             printf("\n");
//         }
//     }
//     else
//     {
//         printf("wrong input");
//     }
//     return 0;
// }

// using function printing star patterrn
#include <stdio.h>
void starPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void reverseStarPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int rows, type;
    printf("Enter 0 for star pattern and 1 for reversed star pattern\n");
    scanf("%d", &type);
    switch (type)
    {
    case 0:
    printf("How many rows do you want?\n");
    scanf("%d", &rows);
        starPattern(rows);
        break;
    case 1:
    printf("How many rows do you want?\n");
    scanf("%d", &rows);
        reverseStarPattern(rows);
        break;
    default:
        printf("You have entered an invalid choice");
        break;
    }
    return 0;
}
