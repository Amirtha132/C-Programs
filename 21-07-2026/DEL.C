#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a[50],element,found;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter Array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be deleted:");
	scanf("%d",&element);
	for(i=0;i<n;i++){
		if(a[i]==element){
			found=1;
			break;
		}
	}
	if(found==0){
		printf("Element not found");
	}
	else{
		for(;i<n-1;i++){
			a[i]=a[i+1];
		}
		n--;
		printf("Array after deletion:");
		for(i=0;i<n;i++){
			printf(" %d",a[i]);
		}
	}
	getch();
}