/*There is a JAR full of candies for sale at a mall counter. JAR has the capacity N, that is JAR can contain maximum N candies when JAR is full. At any point of time. JAR can have M number of Candies where M<=N. Candies are served to the customers. JAR is never remain empty as when last k candies are left. JAR if refilled with new candies in such a way that JAR get full.
Write a code to implement above scenario. Display JAR at counter with available number of candies. Input should be the number of candies one customer can order at point of time. Update the JAR after each purchase and display JAR at Counter.
Output should give number of Candies sold and updated number of Candies in JAR.
If Input is more than candies in JAR, return: “INVALID INPUT”
Given,
N=10, where N is NUMBER OF CANDIES AVAILABLE
K =< 5, where k is number of minimum candies that must be inside JAR ever.
Example 1:(N = 10, k =< 5)
Input Value
3
Output Value
NUMBER OF CANDIES SOLD : 3
NUMBER OF CANDIES LEFT : 7*/



#include<stdio.h>

int main()
{
    int N, K, jar, order;
    printf("Enter the capacity of Jar (N):");
    scanf("%d", &N);

    printf("Enter the minimum candies to be left (K): ");
    scanf("%d", &K);

    jar = N;

    printf("Candies available in JAR = %d\n", jar);

    printf("Enter the number of candies to be ordered: ");
    scanf("%d", &order);

    if(order > jar )
    {
        printf("INVALID INPUT");
    }
    else
    {
        jar = jar - order;

        printf("\nNUMBER OF CANDIES SOLD : %d", order);
        printf("\nNUMBER OF CANDIES LEFT : %d", jar);

        if(jar <= K)
        {
            jar = N;
            printf("\nJAR refilled!");
            printf("\nCandies in JAR : %d", jar);
        }
    }

    return 0;
}
