#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1,sum=0;
printf("Enter n:");
scanf("%d",&n);
print:
	sum=sum+i;
	i++;
	if(i<=n)
		goto print;
	printf("Sum of natural numbers=%d",sum);
getch();
}