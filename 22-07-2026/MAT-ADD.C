#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],b[10][10],d[10][10],i,j,r,c;
	clrscr();
	printf("Enter the no.of rows:");
	scanf("%d",&r);
	printf("Enter the no.of cols:");
	scanf("%d",&c);
	printf("Enter the 1st matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the 2nd matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			d[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Sum of Matrices:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf(" %d",d[i][j]);
		}
		printf("\n");
	}
	getch();
}


