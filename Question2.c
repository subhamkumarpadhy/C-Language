// unit conversion
#include <stdio.h>
int main()
{
    int t;
    float miles, km, inches, foot, meter, kg, cms, pound;
    while (1)
    {
        printf("Enter 0 to quit\n");
        printf("press 1 if you want kms to miles conversion\n");
        printf("press 2 if you want inches to foot conversion\n");
        printf("press 3 if you want cms to inches conversion\n");
        printf("press 4 if you want pound to kgs conversion\n");
        printf("press 5 if you want inches to meters conversion\n");
        scanf("%d", &t);
        switch (t)
        {
        case 0:
            printf("Quit\n");
            goto end;
        case 1:
            printf("Enter the distance in kms\n");
            scanf("%f", &km);
            miles = (km / 1.6213);
            printf("%f miles\n", miles);
            break;
            printf("\n");
        case 2:
            printf("Enter the length in inches \n");
            scanf("%f", &inches);
            foot = (inches / 0.083333);
            printf("%f foot\n", foot);
            break;
            printf("\n");
        case 3:
            printf("Enter the length in cms\n");
            scanf("%f", &cms);
            inches = (cms / 0.393701);
            printf("%f inches\n", inches);
            break;
            printf("\n");
        case 4:
            printf("Enter the amount of pound\n");
            scanf("%f", &pound);
            kg = (pound / 0.453592);
            printf("%f kg\n", kg);
            break;
            printf("\n");
        case 5:
            printf("Enter the length in inches\n");
            scanf("%f", &inches);
            meter = (inches / 0.0254);
            printf("%f meter\n", meter);
            break;
        }
    }
end:
}