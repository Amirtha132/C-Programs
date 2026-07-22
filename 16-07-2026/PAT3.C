#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,l,n;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=i;k<n;k++)
		{
			printf("  ");
		}
		for(j=i;j<=2*i-1;j++)
		{
			printf(" %d",j);
		}
		for(l=2*i-2;l>=i;l--)
		{
			printf(" %d",l);
		}
		printf("\n");
	}
	getch();
}
