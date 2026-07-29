#include <stdio.h>

int main()
{
    int n,m,i,j,max=0,index=-1,count;
    //printf("Enter rows and columns :");
    scanf("%d %d", &n, &m);
    int arr[n][m];
    //printf("Enter 0's and 1's matrix :\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        count = 0;

        for(j = 0; j < m; j++) {
            if(arr[i][j] == 1)
                count++;
        }

        if(count > max) {
            max = count;
            index = i;
        }
    }

    printf("%d", index);

    return 0;
}
