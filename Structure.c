#include <stdio.h>
#include<string.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[50];
} manish, subham, sritam;

int main()
{
    // struct student manish, subham, sritam;
    manish.id = 1;
    subham.id = 2;
    sritam.id = 3;
    manish.marks = 96;
    subham.marks = 46;
    sritam.marks = 86;
    manish.fav_char = 'M';
    subham.fav_char = 'S';
    sritam.fav_char = 'E';
    strcpy(manish.name,"Manish is the brighest student of our class");
    strcpy(subham.name,"Subham is the sexiest  student of our class");
    strcpy(sritam.name,"Sritam is the smartest student of our class");
    printf("The id number of manish is %d\n", manish.id);
    printf("The id number of subham is %d\n", subham.id);
    printf("The id number of sritam is %d\n", sritam.id);
    printf("Manish got %d mark\n", manish.marks);
    printf("subham got %d mark\n", subham.marks);
    printf("sritam got %d mark\n", sritam.marks);
    printf("The favourite character of manish is %c\n", manish.fav_char);
    printf("The favourite character of subham is %c\n", subham.fav_char);
    printf("The favourite character of sritam is %c\n", sritam.fav_char);
    printf("About Manish : %s\n",manish.name);
    printf("About Subham : %s\n",subham.name);
    printf("About Sritam : %s\n",sritam.name);
    return 0;
}
