#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],b[50],c[50],i,j,k,n,n1,n2,temp;
	clrscr();
	printf("Enter the size of 1st array:");
	scanf("%d",&n1);
	printf("Enter the elements in 1st array:");
	for(i=0;i<n1;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the size of 2nd array:");
	scanf("%d",&n2);
	printf("Enter the elements in 2nd array:");
	for(i=0;i<n2;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n1-1;i++){
		for(j=i+1;j<n1;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n2-1;i++){
		for(j=i+1;j<n2;j++){
			if(b[i]>b[j]){
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	i=0;j=0;k=0;
	while(i<n1 && j<n2){
		if(a[i]<b[j]){
			c[k]=a[i];
			i++;
		}else{
			c[k]=b[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		c[k]=a[i];
		i++;
		k++;
	}
	while(j<n2){
		c[k]=b[j];
		j++;
		k++;
	}
	printf("Merged Array:");
	for(i=0;i<k;i++){
		printf(" %d",c[i]);
	}
	getch();
}

