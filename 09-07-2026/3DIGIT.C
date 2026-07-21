#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("Enter a number:");
scanf("%d",&num);
if (num>=100 && num<=999)
{
printf("It is a 3 digit number");
}
else
{
printf("It is not a 3 digit number");
}
getch();
}