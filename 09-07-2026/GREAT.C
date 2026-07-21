#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
printf("Enter 3 numbers: ");
scanf("%d%d%d",&a,&b,&c);
d=a>b & a>c ?a:((b>c)? b:c);

printf("Greatest number= %d",d);
getch();
}
