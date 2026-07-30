/*An array contains numbers from 1 to N, but one number is missing.
 Write a function using pointers to find the missing number. */


#include <stdio.h>
int missingNumber(int *arr, int size)
{
    int total = (size + 1) * (size + 2) / 2;
    int sum = 0;
    for (int *p = arr; p < arr + size; p++)
        sum += *p;
    return total - sum;
}
int main()
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    int arr[n - 1];
    printf("Enter %d numbers (from 1 to %d with one missing):\n", n - 1, n);
    for (int i = 0; i < n - 1; i++)
        scanf("%d", &arr[i]);
    printf("Missing Number = %d\n", missingNumber(arr, n - 1));
    return 0;
}
