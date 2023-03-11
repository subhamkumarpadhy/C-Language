#include <stdio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void bubblesort(int *A, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int A[] = {22, 88, 44, 77, 11, 55, 33, 66, 99};
    int n = 9;
    printf("Before sorting the elements are : ");
    printArray(A, n);
    bubblesort(A, n);
    printf("After sorting the elements are : ");
    printArray(A, n);
    return 0;
}
