#include<stdio.h>
#include<conio.h>
enum day
{
MON=1,
TUE,
WED,
TUR,
FRI,
SAT,
SUN
};
void main()
{
enum day today=WED;
clrscr();
switch(today)
{
case 1:
printf("Today is Monady");
break;
case 2:
printf("Today is Tuesday");
break;
case 3:
printf("Today is Wednesday");
break;
case 4:
printf("Today is Thursday");
break;
case 5:
printf("Today is Friday");
break;
case 6:
printf("Today is Saturday");
break;
default:
printf("Today is Sunday");
}
getch();
}

