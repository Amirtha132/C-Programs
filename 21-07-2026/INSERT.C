#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[50],n,element;
	clrscr();
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter Array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be inserted:");
	scanf("%d",&element);
	i=n-1;
	while(i>=0 && a[i]>element){
		a[i+1]=a[i];
		i--;
	}
	a[i+1]=element;
	n++;
	printf("Array after Insertion:");
	for(i=0;i<n;i++){
		printf(" %d",a[i]);
	}
	getch();
}