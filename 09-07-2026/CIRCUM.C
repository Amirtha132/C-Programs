#include<stdio.h>
#include<conio.h>
void main()
{
float r,circum;
clrscr();
printf("Enter Radius:");
scanf("%f",&r);
circum=2*3.14f*r;
printf("Circumference of circle=%f",circum);
getch();
}