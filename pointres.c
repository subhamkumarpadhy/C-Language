#include <stdio.h>
int main()
{
    // int a = 69;
    // int *p = &a;
    // int *p2 = NULL;
    // printf("The adress of P is  %p\n", &p);
    // printf("The adress of P2 is %p\n", &p2);
    // printf("The value of P2 is %p\n", p2);
    // printf("The adress of a is  %p\n", &a);
    // printf("The adress of a is  %p\n", p);
    // printf("The adress of a is  %p\n", &*p);
    // printf("The value of  a is  %d\n", *p);
    // printf("The value of  a is  %d\n", a);

    // pointer arthimatic
    // char a = '5';
    // char* p =  &a;
    // printf("%p\n",*p);
    // p++;
    // printf("%p\n",p);
    // printf("%p\n",p-2);

    // pointer and array
    int arr[]={1,2,3,4,5,6,67};
    printf("The address at position 3  of the array is %d\n",&arr[3]);
    printf("The address of 1st element of the array is %d\n",&arr[0]);
    printf("The address of 1st element of the array is %d\n",arr);
    printf("The address of 2nd element of the array is %d\n",&arr[1]);
    printf("The address of 2nd element of the array is %d\n",arr + 1);

    printf("The value at position 3 of the array is %d\n",arr[3]);
    printf("The vaalue of address of 1st element of the array is %d\n",*(&arr[0]));
    printf("The vaalue of address of 1st element of the array is %d\n",arr[0]);
    printf("The vaalue of address of 1st element of the array is %d\n",*(arr));
    printf("The vaalue of address of 2nd element of the array is %d\n",*(&arr[1]));
    printf("The vaalue of address of 2nd element of the array is %d\n",arr[1]);
    printf("The vaalue of address of 2nd element of the array is %d\n",*(arr + 1));
    return 0;
}
