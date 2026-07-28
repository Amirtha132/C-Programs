//lowest triangular matrix to be zero
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],n,i,j;
	clrscr();
	printf("Enter order of matrix:");
	scanf("%d",&n);
	printf("Enter Matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>j)
			{
				a[i][j]=0;
			}
		}
	}
	printf("Matrix after lower triangular matrix is 0:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	getch();
}

