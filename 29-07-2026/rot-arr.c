/*Write a program to determine whether one array is a
 circular rotation of another array using pointers. */


#include <stdio.h>
int isCircularRotation(int *a, int *b, int n)
{
    for (int shift = 0; shift < n; shift++)
    {
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (*(a + i) != *(b + (i + shift) % n))
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            return 1;
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);
    if (isCircularRotation(a, b, n))
        printf("The second array is a circular rotation of the first array\n");
    else
        printf("The second array is NOT a circular rotation of the first array\n");
    return 0;
}
