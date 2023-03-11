#include <stdio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int partion(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);
    // swap A[low] ans A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}
void quicksort(int A[], int low, int high)
{
    if (low < high)
    {
        int partionindex; // Index of pivot after partition
        partionindex = partion(A, low, high);
        quicksort(A, low, partionindex - 1);  // sort left subarray
        quicksort(A, partionindex + 1, high); // sort right subarray
    }
}
int main()
{
    int A[] = {5, 8, 4, 1, 11, 15, 2};
    int n = 7;
    printf("Before sorting the elements are : ");
    printArray(A, n);
    quicksort(A, 0, n - 1);
    printf("After sorting the elements are : ");
    printArray(A, n);
    return 0;
}
