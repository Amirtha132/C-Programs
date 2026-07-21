#include<stdio.h>
#include<conio.h>
void main()
{
float b,h,area;
clrscr();
printf("Enter breadth:");
scanf("%f",&b);
printf("Enter height:");
scanf("%f",&h);
area=0.5f * b * h;
printf("Area of circle= %f",area);
getch();
}