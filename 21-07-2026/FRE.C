#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],n,i,j,count;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter Array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		count=1;
		if(a[i]==-1){
			continue;
		}
		for(j=i+1;j<n;j++){
		    if(a[i]==a[j]){
				count++;
				a[j]=-1;
			}
		}
		printf("%d occurs %d times\n",a[i],count);
	}
	getch();
}