#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,a[50];
	clrscr();
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Reverse of array:");
	for(i=n-1;i>=0;i--)
	{
		printf(" %d",a[i]);
	}
	getch();
}
