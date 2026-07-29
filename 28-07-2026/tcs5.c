#include <stdio.h>

int main()
{
    int t,v,w,four,two;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&v);
        scanf("%d",&w);

        if(w % 2 != 0 || w < 2 * v || w > 4 * v)
        {
            printf("-1\n");
        }
        else
        {
            four = (w - 2 * v)/2;
            two = v - four;

            printf("%d %d\n",two,four);
        }
    }

    return 0;
}
