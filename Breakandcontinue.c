#include <stdio.h>
int main()
{
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("Enter your age\n");
        scanf("%d", &age);
        // if (age > 10)
        // {
        //     break;
        // }
        
        // it is continue statement
        if (age > 10)
        {
            continue;
        }
        printf("subham is a very good boy\n");
        break;
    }
    return 0;
}
