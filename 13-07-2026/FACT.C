#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1,fact=1;
printf("Enter n:");
scanf("%d",&n);
print:
	fact=fact*i;
	i++;
	if(i<=n)
		goto print;
	printf("Factorial=%d",fact);
getch();
}