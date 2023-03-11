#include <stdio.h>
int main()
{
    // ||it is the use of goto normal use||
    // lable:
    //     printf("we are in the label\n");
    //     goto end ;
    //     goto lable ;
    //     end :
    //     printf("we are at end");

    // ||it the use of goto in nested loop||
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the number. Enter 0 to exit");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
        }
    }
end:
    return 0;
}
