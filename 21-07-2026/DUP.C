#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,a[50],count=0,j;
	clrscr();
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
	}
	printf("Number of duplicate elements:%d",count);
	getch();
}
