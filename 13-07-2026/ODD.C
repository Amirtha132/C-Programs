#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1;
printf("Enter n:");
scanf("%d",&n);
print:
	printf("%d\n",i);
	i+=2;
	if(i<=n)
		goto print;
getch();
}