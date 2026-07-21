#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1,mul=1;
clrscr();
printf("Enter table no:");
scanf("%d",&n);
print:
	mul=i*n;
	printf("%d x%d = %d\n",i,n,mul);
	i++;
	if(i<=10)
		goto print;
getch();
}