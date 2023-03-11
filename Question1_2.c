// area and volume of circcle
#include<stdio.h>
int main(){
    float r,h,v,a;
    printf("Enter r\n");
    scanf("%f",&r);
    a = (22*r*r)/7;
    printf("area %f\n",a);
    printf("Enter h\n");
    scanf("%f",&h);
    v =(22*r*r*h)/7;
    printf("volume %f\n",v);
    return 0;
}
