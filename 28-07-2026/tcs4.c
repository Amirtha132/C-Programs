#include <stdio.h>

int main()
{
    int n,temp,sum = 0;

    scanf("%d", &n);

    temp = n;

    while(temp > 0)
    {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }

    if(n % sum == 0)
        printf("Good Number");
    else
        printf("Bad Number");

    return 0;
}
