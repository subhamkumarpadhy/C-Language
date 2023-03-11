#include <stdio.h>
int main()
{
    // //accessing array elements
    // int array[5]={10,20,30,35,46};
    // printf("The element is %d",array[2]);

//    //sum and avarage of given marks  
//     int sum=0,i,marks[5];
//     float avg;
//     printf("Enter the marks of student\n");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &marks[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         sum=sum+marks[i];
//     }
//     avg=(float)sum/5;
//     printf("The avarage is %f\nThe sum is %d\n",avg,sum);
    
    //// array reversal
    // int i,array[5];
    // printf("Enter the elements of the array\n");
    // for ( i = 0; i < 5; i++)
    // {
    //     scanf("%d",&array[i]);
    // }
    //     printf("The reverse order of array is \n");
    //     for ( i = 4; i >=0 ; i--)
    //     {
    //         printf("%d\n",array[i]);
    //     }
    
    //// max and min term in array
    // int i,array[100],n,max,min;
    // printf("Enter the size of array\n");
    // scanf("%d",&n);
    // printf("Enter the values to the array\n");
    // for (int i = 0 ; i < n; i++)
    // {
    // scanf("%d",&array[i]);
    // }
    // max=min=array[0];
    // for ( i = 0 ; i < n ; i++)
    // {
    //     if (array[i]>max)
    //     {
    //         max = array[i];
    //     }
    //     if (array[i]<min)
    //     {
    //         min = array[i];
    //     }
    // }
    //     printf("The max term is %d\n",max);
    //     printf("The min term is %d\n",min);
    
    //// finding even and odd numbers in an array
    // int num, i, array[100];
    // printf("Enter the size of array\n");
    // scanf("%d", &num);
    // printf("Enter the elements of array\n");
    // for (i = 0; i < num; i++)
    // {
    //     scanf("%d", &array[i]);
    // }
    // printf("Even numbers in the array = ");
    // for (i = 0; i < num; i++)
    // {
    //     if (array[i] % 2 == 0)
    //     {
    //         printf("%d  ", array[i]);
    //     }
    // }
    // printf("\nOdd  numbers in the array = ");
    // for (i = 0; i < num; i++)
    // {
    //     if (array[i] % 2 != 0)
    //     {
    //         printf("%d  ", array[i]);
    //     }
    // }

    //// sum of two 1d arrays
    int i, a1[5], a2[5], a3[5];
    printf("Enter the elements of 1st array\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a1[i]);
    }
    printf("Enter the elements of 2nd array\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a2[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        a3[i] = a1[i] + a2[i];
        printf("The sum of the array in element wise is %d\n", a3[i]);
    }
    return 0;
}
