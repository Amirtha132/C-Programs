#include<stdio.h>
#include<conio.h>
void main()
{
       int choice;
       float a,r,l,b,h,area;
       clrscr();
       do
       {
		printf("\n1.Area of Square\n2.Area of Circle\n3.Area of Triangle\n4.Area of Rectangle\n5.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter side:");
				scanf("%f",&a);
				area=a*a;
				printf("Area of Square:%f",area);
				break;
			case 2:
				printf("Enter radius:");
				scanf("%f",&r);
				area=3.14f*r*r;
				printf("Area of Circle:%f",area);
				break;
			case 3:
				printf("Emter base and height:");
				scanf("%f%f",&b,&h);
				area=0.5f*b*h;
				printf("Area of Triangle:%f",area);
				break;
			case 4:
				printf("Enter length and breadth:");
				scanf("%f%f",&l,&b);
				area=l*b;
				printf("Area of Rectangle:%f",area);
				break;
			case 5:
				exit();
				break;
			default:
				printf("Invalid choice!");
		}
       }while(choice<5);
       getch();
}