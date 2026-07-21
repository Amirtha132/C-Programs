#include<stdio.h>
#include<conio.h>
void main()
{
int choice;
float a,r,l,b,h,area;
clrscr();
printf("1.Area of Square\n2.Area of Circle\n3.Area of Triangle\n4.Area of Rectangle");
printf("\nEnter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter side:");
scanf("%f",&a);
area=a*a;
printf("Area of square:%f",area);
break;
case 2:
printf("Enter radius:");
scanf("%f",&r);
area=3.14f*r*r;
printf("Area of Circle:%f",area);
break;
case 3:
printf("Enter base:");
scanf("%f",&b);
printf("Enter height:");
scanf("%f",&h);
area=0.5f*b*h;
printf("Area of Triangle:%f",area);
break;
case 4:
printf("Enter length:");
scanf("%f",&l);
printf("Enter breadth:");
scanf("%f",&b);
area=l*b;
printf("Area of rectangle:%f",area);
break;
default:
printf("Invalid choice");
}
getch();
}