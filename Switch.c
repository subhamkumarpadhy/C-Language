#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter your weight\n");
    scanf("%d", &a);
    printf("Enter your age\n");
    scanf("%d", &b);

    switch (a)
    {
    case 20:
        printf("you are 20kg\n");
        switch (b)
        {
        case 30:
            printf("you are healthy\n");
            break;
        }
        break;
    case 40:
        printf("you are an adult \n");
        switch (b)
        {
        case 50:
            printf("your brain is powewrful\n");
        }
        break;
    case 60:
        printf("you are an old\n");
        switch (b)
        {
        case 90:
            printf("not much healthy\n");
            break;
        }
        break;
    default:
        printf("stay at house\n");
        break;
        return 0;
    }
}

//GRADE calculation
// #include <stdio.h>
// void main()
// {
//     int m, n;
//     printf("Enter mark of student\n");
//     scanf("%d", &m);
//     n = m / 10;
//     if (m >= 0 && m <= 100)
//     {
//         switch(n)
//         {
//         case 10:
//         case 9:
//             printf("O-GRADE\n");
//             break;
//         case 8:
//             printf("E-GRADE\n");
//             break;
//         case 7:
//             printf("A-GRADE\n");
//             break;
//         case 6:
//             printf("B-GRADE\n");
//             break;
//         case 5:
//             printf("C-GRADE\n");
//             break;
//         case 4:
//             printf("D-GRADE\n");
//             break;
//         case 3:
//         case 2:
//         case 1:
//         case 0:
//             printf("Fail\n");
//             break;
//         }
//     }
//     else{
//         printf("Enter the mark between 0 to 100 for mark calcultion\n");
//     }
// }
