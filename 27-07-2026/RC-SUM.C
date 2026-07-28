#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50][50],r,c,i,j,rsum,csum;
	clrscr();
	printf("Enter no of rows & cols:");
	scanf("%d%d",&r,&c);
	printf("Enter matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Row Sum:\n");
	for(i=0;i<r;i++)
	{
		rsum=0;
		for(j=0;j<c;j++)
		{
			rsum=rsum+a[i][j];
		}
		printf("Row %d = %d\n",i+1,rsum);
	}
	printf("\nColumn sum:\n");
	for(j=0;j<c;j++)
	{
		csum=0;
		for(i=0;i<r;i++)
		{
			csum=csum+a[i][j];
		}
		printf("Column %d = %d\n",j+1,csum);
	}
	getch();
}
