#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a[50],count,j;
	clrscr();
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Unique elements are :");
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
		if(count==1)
		{
			printf(" %d",a[i]);
		}
	}
	getch();
}