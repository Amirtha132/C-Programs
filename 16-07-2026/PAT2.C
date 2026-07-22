#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("Enetr n:");
	scanf("%d",&n);
	for(i=65;i<65+n;i++)
	{
	for(j=65;j<=i;j++)
	{
		printf("%c ",i);
	}
	printf("\n");
	}
	getch();
}
