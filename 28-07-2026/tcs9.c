#include <stdio.h>
int main()
{
    int n,i,total=0,left=0;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    for(i = 0; i < n; i++)
    {
        total = total - arr[i];
        if(left == total)
        {
            printf("%d", i);
            return 0;
        }
        left = left + arr[i];
    }
    printf("-1");
    return 0;
}
