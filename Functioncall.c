// call by value
//#include <stdio.h>
// void swap(int x, int y)
// {
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
// }
// void main()
// {
//     int r = 10, v = 20;
//     swap(r, v); // passing value to function
//     printf("\nValue of r: %d", r);
//     printf("\nValue of v: %d", v);
// }

// call by reference
// void swap(int *x, int *y)
// {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }
// void main()
// {
//     int r = 10, v = 20;
//     swap(&r, &v); // passing address to function
//     printf("\nValue of r: %d", r);
//     printf("\nValue of v: %d", v);
// }



// call by reference
#include <stdio.h>
void changeValue(int* address)
{
    *address = 37565;
}
int main()
{
    int a = 34, b =56;
    printf("The value of A is %d\n", a);
    changeValue(&a);
    printf("The value of A , now is %d\n", a);
    return 0;
}
