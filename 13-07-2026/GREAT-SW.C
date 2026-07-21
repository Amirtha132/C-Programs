
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,choice;
clrscr();
printf("Enter 3 numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>b & a>c)
choice=1;
else if(b>c)
choice=2;
else
choice=3;
switch(choice)
{
case 1:
printf("%d is greater",a);
break;
case 2:
printf("%d is greater",b);
break;
case 3:
printf("%d is greater",c);
break;
default:
printf("Invalid");
}
getch();
}