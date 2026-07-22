#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a[10][10],r,c;
	printf("Enter the number of rows:");
	scanf("%d",&r);
	printf("Enter the number of columns:");
	scanf("%d",&c);
	printf("Enter the elements:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("The 2D Array is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	getch();
}

