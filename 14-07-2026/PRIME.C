#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,flag=0;
	printf("Enter n:");
	scanf("%d",&n);
	if(n>1)
	{
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("It is a prime");
		}
		else
		{
			printf("It is not prime");
		}
	}
	getch();
}
