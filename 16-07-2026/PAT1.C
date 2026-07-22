#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=97;j<97+i;j++){
			printf("%c ",j);
		}
		printf("\n");
	}
	getch();
}