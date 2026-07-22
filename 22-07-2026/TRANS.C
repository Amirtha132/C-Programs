#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],t[10][10],i,j,r,c;
	clrscr();
	printf("Enter the no.of rows:");
	scanf("%d",&r);
	printf("Enter the no.of cols:");
	scanf("%d",&c);
	printf("Enter elements:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			t[j][i]=a[i][j];
		}
	}
	printf("Transpose of Array:\n");
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			printf(" %d",t[i][j]);
		}
		printf("\n");
	}
	getch();
}
