/*We want to estimate the cost of painting a property. Interior wall painting cost is Rs.18 per sq.ft. and exterior wall painting cost is Rs.12 per sq.ft.
Take input as
1. Number of Interior walls
2. Number of Exterior walls
3. Surface Area of each Interior Wall in units of square feet
4. Surface Area of each Exterior Wall in units of square feet
If a user enters zero  as the number of walls then skip Surface area values as User may don’t  want to paint that wall.
Calculate and display the total cost of painting the property
Example 1:
6
3
12.3
15.2
12.3
15.2
12.3
15.2
10.10
10.10
10.00
Total estimated Cost : 1847.4 INR */



#include <stdio.h>
int main()
{
    int interior,exterior,i;
    float area,cost=0;
    scanf("%d",&interior);
    scanf("%d",&exterior);
    for(i = 0; i < interior; i++)
    {
        scanf("%f", &area);
        cost = cost + (area * 18);
    }
    for(i = 0; i < exterior; i++)
    {
        scanf("%f", &area);
        cost = cost + (area * 12);
    }
    printf("Total estimated Cost: %.1f INR",cost);
    return 0;
}
