#include<stdio.h>
#include<conio.h>
void main()
{
	int fib[100],i,n;
	clrscr();
	printf("Enter the number of terms:");
	scanf("%d",&n);
	fib[0]=0;
	fib[1]=1;
	printf("Fibonacci series:");
	if(n>=1)
	{
		printf("%d",fib[0]);
	}
	if(n>=2)
	{
		printf(" %d",fib[1]);
	}
	for(i=2;i<n;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
		printf(" %d",fib[i]);
	}
	getch();
}