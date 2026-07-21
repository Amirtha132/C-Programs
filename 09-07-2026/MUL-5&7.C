#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter a number:");
scanf("%d",&a);
printf(a%5==0 & a%7==0 ? "It is a multiple of both 5 and 7" : ((a%5==0)?"It is a multiple of 5" :((a%7==0)? "It is a multiple of 7":"It is not a multiple of both 5 and 7")));
getch();
}