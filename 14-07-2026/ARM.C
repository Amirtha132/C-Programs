#include<stdio.h>
#include<conio.h>
void main()
{
	long int n,dig=0,arm=0,rem,temp,i,x;
	clrscr();
	printf("Enter n:");
	scanf("%ld",&n);
	temp=n;
	while(temp>0)
	{
		temp=temp/10;
		dig++;
	}
	temp=n;
	while(temp>0)
	{
		rem=temp%10;
		x=1;
		for(i=1;i<=dig;i++)
		{
			x=x*rem;
		}
		arm=arm+x;
		temp=temp/10;
	}
	if(arm==n)
	{
		printf("It is Armstrong number");
	}
	else
	{
		printf("It is not Armstrong number");
	}
	getch();
}