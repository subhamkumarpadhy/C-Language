#include <stdio.h>
void printstar(int n);
int main()
{
    printstar(5);
    return 0;
}
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c\n", '$');
    }
}
