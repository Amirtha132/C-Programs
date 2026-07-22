#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,mul=1;
clrscr();
printf("Enter table no:");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
	mul=i*n;
	printf("%d x %d =%d\n",i,n,mul);
}
getch();
}