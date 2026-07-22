#include<stdio.h>
#include<conio.h>
void main()
{
int num,rem=0,sum=0;
clrscr();
printf("Enter a number:");
scanf("%d",&num);
while(num>0)
{
	rem=num%10;
	num=num/10;
	sum=sum+rem;
}
printf("Sum of given number:%d",sum);
getch();
}
