#include<stdio.h>
#include<stdio.h>
void main()
{
int unit,cost;
clrscr();
printf("Enter Electricity Unit:");
scanf("%d",&unit);
if(unit<=200)
{
cost=unit*3;
printf("Electricity Bill=%d",cost);
}
else if(unit>=201 && unit<=500)
{
cost=unit*4;
printf("Electricity Bill=%d",cost);
}
else if(unit>=501 && unit<=1000)
{
cost=unit*8;
printf("Electricity Bill=%d",cost);
}
else
{
cost=unit*10;
printf("Electricity Bill=%d",cost);
}
getch();
}