#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,k,a;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a=1;
		for(k=i;k<n;k++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("%d ",a);
			a=a*(i-j)/(j+1);
		}
		printf("\n");
	}
	getch();
}